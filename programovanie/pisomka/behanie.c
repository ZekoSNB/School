#include<stdio.h>

int main() {
	int sirka;
	int dlzka;
	int kolo;
	printf("Sirka ihriska v metroch: \n");
	scanf("%i", &sirka);
	printf("Dlzka ihriska v metroch: \n ");
	scanf("%i", &dlzka);
	printf("Pocet kol: \n");
	scanf("%i", &kolo);
	int obvod = 2 * (sirka + dlzka);
	printf("Sirka ihriska je %i metrov, dlzka je %i metrov \n", sirka, dlzka);
	printf("Obvod jedneho kola okolo ihriska je %i metrov \n", obvod);
	printf("A po %i kolach zabehne %i metrov \n", kolo, obvod*kolo);


	return 0;
}
