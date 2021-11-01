## PRO1's Kantan
### Change output precision
```c++
cout.setf(ios::fixed);
cout.precision(4);
```
---
### Types of sequences
We know beforehand the number of inputs:
```c++
for (int i = 0; n > i; ++i) {
    //code
}
```
We know the last element the sequence will contain:
```c++
while (input != "end") {
    //code
}
```
We don't know any of the above-mentioned data therefore the boolean property of "cin >>" is used
```c++
while (cin >> input) {
    //code
}
```
### Algorithms in sequences  
Search algorithm: consists in iterating through the sequence until a match is found as it's not necessary to read more elements.
```c++
//Commonly used syntax when using a search algorithm.
while (cin >> input and not found) {
    //code
}
```
Traversal algorithm: consists in iterating through the entire sequence even though a match is found as the program needs all of them to compute the final result.
```c++
//Commonly used syntax when using a search algorithm.
while (cin >> input) {
    //code
}
```