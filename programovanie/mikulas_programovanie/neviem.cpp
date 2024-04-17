#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int a[3][50];
    long sucet[4];
    for (int i = 0; i < 3; i++) for (int j = 0; j < 50; j++) a[i][j] = rand() % 100;
    for (int i = 0; i < 3; i++){
        sucet[i] = 0;
        for (int j = 0; j < 50; j++){
            sucet[i] += a[i][j];
        }
    }
    for (int i = 1; i < 3; i++){
        if (sucet[i] > sucet[i-1]){
            sucet[4] = sucet[i];    
        }
    }
    for (int i = 0; i < 3; i++){
        cout << "Sucet " << i << " : " << sucet[i] << endl;
    }
    cout << "Najvacsia suma je: " << sucet[4] << endl;
}