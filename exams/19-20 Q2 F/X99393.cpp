// X99393   Factor alfa
// Created by arnxxau on 16/01/2022.
//
#include <iostream>
#include <vector>

using namespace std;

struct Asignatura {
    int id;
    double creditos;
    double nota;
};

struct Alumno {
    int dni;
    vector <Asignatura> asigs;
};

typedef vector <Alumno> Alumnos;

// Pre: --
// Post: retorna el número d'alumnes a alus que superen el factor alfa

double compute_alpha(const vector<Asignatura>& v) {
    double upper = 0, down = 0;
    int n_asgs = v.size();
    for (int i = 0; i < n_asgs; ++i) {
        upper += v[i].nota * v[i].creditos;
        down += v[i].creditos;
    }
    return upper / down;
}

int supera_alfa(const Alumnos& alus) {
    int count = 0;
    int alus_size = alus.size();
    for (int i = 0; i < alus_size; ++i) {
        if (compute_alpha(alus[i].asigs) >= 5)
            ++count;
    }
    return count;
}

// Pre: a l'entrada hi ha informació de m assignatures
// Post: retorna un vector de Asignatura amb la informació de l'entrada,
//          mantenint l'ordre d'aparició
vector <Asignatura> lee_asignaturas(int m) {
    vector<Asignatura> asignaturas(m);
    for (int i = 0; i < m; ++i) {
        Asignatura asignatura;
        cin >> asignatura.id >> asignatura.creditos >> asignatura.nota;
        asignaturas[i] = asignatura;
    }
    return asignaturas;
    // el teu codi aquí
}

int main() {
    int n;
    cin >> n;
    Alumnos a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].dni;
        int m;
        cin >> m;
        a[i].asigs = lee_asignaturas(m);
    }
    cout << supera_alfa(a) << endl;
}