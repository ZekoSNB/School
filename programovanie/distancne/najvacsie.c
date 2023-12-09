#include <stdio.h>

int main() {
	int a,b,c;
	int result = 0;
	printf("Zadajte cisla oddelene medzerou \n");
	scanf("%i %i %i",&a, &b, &c);
	int data[] = {a, b, c};
	for (int i = 0; i < 3; i++){
		if (data[i] > result){
			result = data[i];
		}
	}
	printf(" najvacsie cislo je %i \n", result);
	return 0;
}
