#include<stdio.h>

int main() {
	float priemer;
	printf("zadaj priemer: ");
	scanf("%f", &priemer);
	if (priemer < 1.6){
		printf("Prospel s vyznamenanim \n");
	}
	else if (priemer < 2 && priemer >= 1.6){
		printf("prospel velmi dobre \n");
	}
	else if (priemer < 4.9 && priemer >= 2) {
		printf("Prospel \n");
	}
	else {
		printf("Neprospel \n");
	}
	return 0;
}
