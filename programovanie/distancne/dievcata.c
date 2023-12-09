#include<stdio.h>

int main() {
	int chlapci, baby;
	printf("zadajte pocet chlapcov \n");
	scanf("%i", &chlapci);
	printf("Zadajte pocet dievcat \n");
	scanf("%i", &baby);
	if ((baby-chlapci) < 0) {
		printf("kazde dievca ma partnera \n");
	}
	else {
		printf("baby nemaju partnera \n");
	}
	

	return 0;
}
