#include<stdio.h>

int main() {
	float metre;
	scanf("%f", &metre);
	printf("Zadana hodnota v Metroch je %f \n", metre);
	printf("Tato hodnota v cm je %f \n", metre*100);
	printf("Tato hodnota v km je %f \n", metre/1000);
	return 0;
}
