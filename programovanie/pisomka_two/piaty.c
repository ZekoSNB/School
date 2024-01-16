#include<stdio.h>


int main() {
	int cislo;
	printf("Zadaj cislo: ");
	scanf("%d", &cislo);
	if (cislo < 100 || cislo > 550){
		if (cislo % 5 == 0){
			printf("Cislo nie je v intervale a je delitelne 5 \n");
		}
		else {
			printf("Cislo nie je v intervale a NIE je delitelne 5 \n");
		}
	}
	else {
		 if (cislo % 5 == 0){
                        printf("Cislo je v intervale a je delitelne 5 \n");
                }
                else {
                        printf("Cislo je v intervale a NIE je delitelne 5 \n");
                }

	}
	return 0;
}
