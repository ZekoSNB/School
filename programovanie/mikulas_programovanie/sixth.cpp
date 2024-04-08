#include <iostream>
// #include <random>

using namespace std;
int main() {
    long a[30];
    long index = -1, find = 686;

    for (int i = 0; i < 30; i++) a[i] = rand() % 900 + 100;
    for (int i = 0; i< 30; i++) if (a[i] == find) index = i;
    if (index == -1) cout << "nenasiel som " << a << endl;
    else cout << "nasiel som " << find << " na indexe " << index << endl;
    return 0;
}