// X89960   Destinacions
// Created by arnxxau on 16/01/2022.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Tren {
    string id_tren;
    string destino;
    string hora;
};

struct InfDest {
    string destino;
    string primer_id;
    int freq;
};

vector<Tren> lee_info_trenes(int n_salidas) {
    vector<Tren> trenes(n_salidas);
    for (int i = 0; i < n_salidas; ++i) {
        Tren tren;
        cin >> tren.id_tren;
        cin >> tren.destino;
        cin >> tren.hora;
        trenes[i] = tren;
    }
    return trenes;
}

//pre: m > 0  es el numero de destinos y v es el vector de trenes
//     con la info de cada <Tren>. El vector v no es vacio y esta
//     ordenado por (1) criterio principal: destino
//     (2) criterio secundario: hora    (3) último criterio:
//     identificador de tren.
//
//
//post: construye un vector de  <InfDest>  con la info recogida
//      de cada destino, su frecuencia y su primer tren
vector<InfDest> crea_v_inf_dest(const vector<Tren>& v, int m) {
    int n_trains = v.size();
    vector<InfDest> destinos(m);
    Tren primer_tren = v[0];
    int j = 0;
    for (int i = 0; i < m; ++i) {
        InfDest dest;
        dest.freq = 0;
        primer_tren = v[j];
        dest.primer_id = primer_tren.id_tren;
        dest.destino = primer_tren.destino;
        while (j < n_trains and primer_tren.destino == v[j].destino) {
            ++dest.freq;
            ++j;
        }
        destinos[i] = dest;
    }

    return destinos;
}

int char_to_int(const char& c) {
    return c - '0';
}
bool arrives_sooner(const Tren& t1, const Tren& t2) {
    string time1 = t1.hora;
    int h1 = char_to_int(time1[0])*10 + char_to_int(time1[1]);
    int m1 = char_to_int(time1[2])*10 + char_to_int(time1[3]);
    string time2 = t2.hora;
    int h2 = char_to_int(time2[0])*10 + char_to_int(time2[1]);
    int m2 = char_to_int(time2[2])*10 + char_to_int(time2[3]);
    if (h1 < h2) return true;
    else if (h1 > h2) return false;
    else return m1 < m2;
}

bool cmp_tren(const Tren& t1, const Tren& t2) {
    if (t1.destino != t2.destino) return t1.destino < t2.destino;
    else if (t1.hora == t2.hora) return t1.id_tren < t2.id_tren;
    else return arrives_sooner(t1, t2);
}

bool cmp_inf_dest(const InfDest& d1, const InfDest& d2) {
    if (d1.freq != d2.freq) return d1.freq > d2.freq;
    else return d1.destino < d2.destino;
}

void escribir_resultados(const vector<InfDest>& v) {
    int v_size = v.size();
    for (int i = 0; i < v_size; ++i) {
        cout << v[i].destino << ' ' << v[i].freq << ' ' << v[i].primer_id << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<Tren> v_tren = lee_info_trenes(n);
    sort(v_tren.begin(), v_tren.end(), cmp_tren);
    vector<InfDest> v_inf_dest = crea_v_inf_dest(v_tren, m);
    sort(v_inf_dest.begin(), v_inf_dest.end(), cmp_inf_dest);
    escribir_resultados(v_inf_dest);
}