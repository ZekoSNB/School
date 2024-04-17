#include<iostream>
using namespace std;

int main(){
    int a, c;
    cin >> a;
    long long b[a];
    for (int i = 0; i < a; i++) cin >> b[i];
    cin >> c;
    for (int i = 0; i < c; i++){
        unsigned long x;
        for (int j = 0; j< a; j++){
            if (b[j] == x){
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}