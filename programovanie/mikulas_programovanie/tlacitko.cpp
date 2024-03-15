#include<iostream>

void action1();

void action2();

void action3();

void action4();

void action5();

void action6();


using namespace std;
int main(){
    int act;
    cin >> act;
    switch (act){
        case 1:
            action1();
            break;
        case 2:
            action2();
            break;
        case 3:
            action3();
            break;
        case 4:
            action4();
            break;
        case 5:
            action5();
            break;
        case 6:
            action6();
            break;
    }
    cout << endl;
    return 0;
}

void action1(){
    cout << "A" << "B" << "D";
}

void action2(){
    cout << "A" << "C" << "D";
}

void action3(){
    cout << "A";
    for (int i = 0; i < 5; i++){
        cout << "C";
    }
    cout << "D";
}

void action4(){
    cout << "A";
    action2();
    cout << "D";
}

void action5(){
    cout << "A";
    action3();
    cout << "C";
    for (int i = 0; i < 5; i++){
        action1();
    }
    cout << "D";
}

void action6(){
    cout << "A";
    action5();
    cout <<"C";
    for (int i = 0; i < 5; i++) cout << "B";
    for (int i = 0; i < 5; i++) action4();
    cout << "D";
}