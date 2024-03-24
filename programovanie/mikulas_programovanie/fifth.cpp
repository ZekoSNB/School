#include<iostream>

using namespace std;

int main(){
    char c;
    long num;
    long num2;
    long sum = 0;
    while ((c=cin.get()) != '\n'){
        if (c >= '0' && c <= '9'){
            cin >> num;
        }
        if (c == '+'){
            cin.unget();
            cin >> num2;
            sum += num + num2;
        }   
    }
    cout << sum << endl;
    return 0;
}