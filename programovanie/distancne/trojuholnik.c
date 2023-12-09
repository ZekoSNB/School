#include<stdio.h>

int najvacsie(int a, int b, int c);

int main(){
	int a,b,c;
	printf("Zadajte cisla trojuholnika oddelene medzerou \n");
        scanf("%i %i %i",&a, &b, &c);
        int data[] = {a, b, c};
        int najvacsie_cislo = najvacsie(a,b,c);
        for (int i = 0; i < 3; i++){
                if (data[i] == najvacsie_cislo){
                        data[i] = 0;
                }
        }
        if (data[0] + data[1] > najvacsie_cislo){
                printf("trojuholnik je zostrojitelny \n");
        }
        else{
                printf("trojuholnik nie je zostrojitelny \n");
        }
        

}

int najvacsie(int a, int b, int c) {
        int result = 0;
        int data[] = {a, b, c};
        for (int i = 0; i < 3; i++){
                if (data[i] > result){
                        result = data[i];
                }
        }
        printf(" najvacsie cislo je %i \n");
        return result;
}

