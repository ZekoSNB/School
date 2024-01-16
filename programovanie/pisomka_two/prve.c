#include <stdio.h>

int main() {
    int a, b, c, d;
    int smallest;
    printf("Zadaj 4 cisla oddelene medzerou: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    smallest = a;
    if (smallest > b){
        smallest = b;
    }
    else if (smallest > c) {
        smallest = c;
    }
    else if (smallest > d){
        smallest =  d;
    }
    printf("Njamensie cislo je: %d \n", smallest);
    return 0;
}
