#include<stdio.h>

int main(){
	int cislo;
	printf("zadaj cislo: \n");
	scanf("%i", &cislo);
	if (cislo % 2 == 0 && cislo % 3 == 0) {
		printf("%i je parne a je delitelne cislom 3 \n", cislo);
	}
	else {
		printf("%i cislo neni parne alebo neni delitelne cislom 3 \n", cislo);
	}
	return 0;
}
