#include<iostream>


void check_sum(int *a, int size, int nofc);

using namespace std;

int main(){
    int a, x;
    cin >> a >> x;
    int cukriky[a];
    for (int i = 0; i < a; i++){
        cin >> cukriky[i];
    }
    check_sum(cukriky, a, x);

    
    return 0;
}

void check_sum(int *a, int size, int nofc){
    int sum;
    for (int i = 0; i < size; i++){
        sum += a[i];
    }
    if (nofc > sum){
        cout << "Dostanete cukriky" << endl;
    }
    else {
        cout << "Nic nedostanete" << endl;
    }
}

int cukriky(int *a, int size, int nofc){
    
}