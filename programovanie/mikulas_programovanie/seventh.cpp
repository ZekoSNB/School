#include<iostream>

using namespace std;

int main(){
    long a[31];
    for (int i = 0; i < 30; i++) a[i] = rand() % 900 + 100;
    for (int i = 0; i < 30; i++){ 
        cout << a[i] << ' ';
        cout << i << endl;
        }
    for (int i = 30; i >= 0; i--) a[i+1] = a[i];
    cout << endl << endl;
    a[0] = 999;
    for (int i = 0; i < 31; i++){ 
        cout << a[i] << ' ';
        cout << i << endl;
        }

    return 0;
}