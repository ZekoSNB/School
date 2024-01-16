#include<stdio.h>

int main() {
	float distance, wait;
	char reply;
	printf("Vzdialenost: ");
	scanf("%f", &distance);
	printf("Cakanie: ");
	scanf("%f", &wait); 
	printf("Znecistenie (a/n): ");
	scanf(" %c", &reply); 
	
	if (reply == 'a') {
		printf("Spolu : %.2f Eur \n", 1.50 + (distance - 5)*0.75 + wait*10/60 + 20);
	}
	else if (reply == 'n') {
		printf("Spolu: %.2f Eur \n", 1.50 + (distance - 5)*0.75 + wait*10/60);
	}
	return 0;
}
