#include<iostream>

using namespace std;

int is_sum(long *pole, long index, long sum);


int main(){
    long index, sum;
    cin >> index;
    cin >> sum;
    long pole[index];


    for (int i = 0; i < index; i++) cin >> pole[i];
    if (is_sum(pole, index, sum)) cout << "Ano" << endl;
    else cout << "Nie" << endl;

    return 0;
}

int is_sum(long *pole, long index, long sum){
    for (int i = 0; i < index; i++){
        for (int j = 0; j < index; j++){
            if (i == j){
                continue;
            }
            if (pole[i] - pole[j] == sum){
                return 1;
            }
        }
    }
    return 0;
}