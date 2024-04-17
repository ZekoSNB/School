#include<iostream>


bool test(long a, long b);
using namespace std;
int main(){
    if (test(5, 3)){
        cout << "Pravda :)" << endl;
    }
    else {
        cout << "Nepravda :(" << endl;
    }
    test(5, 3) ? cout << "Pravda :)" << endl : cout << "Nepravda :(" << endl;
}

bool test(long a, long b){
    return a > b;
}