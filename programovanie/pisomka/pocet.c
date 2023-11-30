#include<stdio.h>

int main() {
	int pocet1;
	int pocet2;
	int pocet3;
	scanf("%i", &pocet1);
	scanf("%i", &pocet2);
	scanf("%i", &pocet3);

	printf("Jurko ma %i gulocok\n", pocet1);
	printf("Marienka ma %i gulocok. \n", pocet2+pocet1);
	printf("Peto ma %i gulocok. \n", pocet3+pocet2+pocet1);
	
	return 0;

}
