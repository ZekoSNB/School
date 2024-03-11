#include<iostream>

using namespace std;

int main(){
    int index;
    int all_nums[401];

    cin >> index;
    int count = index;
    for (int i = 0; i < index*index; i++){
        cin >> all_nums[i];
    }

    for (int i = 1; i <= index; i++){
        for (int j = index - i; j < index*index; j += index){
            cout << all_nums[j] << (j+index+1 > index*index ? "\n" : " ");
        }
    }
    return 0;

}