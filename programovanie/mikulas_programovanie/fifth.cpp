#include<iostream>

using namespace std;

int main() {
    char c, fun;
    long cislo, cislo2, sum = 0, index = 0;
    
    while((c = cin.get()), c != '\n') {
        
        if (c >= '0' && c <= '9') {
            cin.unget();

            if (index % 2 == 0) {
                cin >> cislo;
                index++;
            }
            else if (index % 2 != 0) {
                cin >> cislo2;
            }
        }
        
        if (c == '+' || c == '-' || c == '*' || c == '/') {
            cin.unget();
            cin >> fun;
        }
    }
            switch (fun) {
                case '+':
                    sum = cislo + cislo2;
                    break;
                case '-':
                    sum = cislo - cislo2;
                    break;
                case '*':
                    sum = cislo * cislo2;
                    break;
                case '/':
                    sum = cislo / cislo2;
                    break;
            }
    cout << sum << endl;
    
    return 0;
}