#include<stdio.h>

int main() {
	int girl,boy;
	printf("pocet dievcat: ");
	scanf("%i", &girl);
	printf("Pocet Chlapcov: ");
	scanf("%i", &boy);
	if (girl == boy) {
		printf("Vsetci maju partnera a nikto neni naviac \n");
	}
	else if (girl > boy){
		printf("Kazde dievca nema partnera a chyba %i chalanov \n", girl-boy);
	}	
	else {
		printf("Kazde dievca ma partnera \n");
	}
	

	return 0;
}
