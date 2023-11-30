#include<stdio.h>

int main(){
	float cena;
	float zlava;
	printf("cena produktu: \n");
	scanf("%f", &cena);
	printf("Zlava v %: \n");
	scanf("%f", &zlava);
	float odcitat = cena/100*zlava;
	printf("Zaplatis %f eur \n", cena-odcitat);
	return 0;
}
