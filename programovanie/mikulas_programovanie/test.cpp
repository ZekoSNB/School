#include<iostream>

float plocha(float a, float b);

using namespace std;


int main(){
    float a;
    float b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << plocha(a,b) << endl;
    return 0;
}

float plocha(float a, float b){
    return a*b/2;
}

