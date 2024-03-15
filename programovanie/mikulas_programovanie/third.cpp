#include <iostream>

using namespace std;
int main(){
    int c = 100;
    for (int i = 1; i < 100 ; i+=3){    
        if (i < c){
            cout << i << " " << c << endl;
            c -= 7;
        }
        else {
            break;
        }
    }
    return 0;
}