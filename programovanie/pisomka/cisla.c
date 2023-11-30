#include<stdio.h>

int main() {
	int poradove;
	int dopredu;
	int dozadu;
	printf("Zadaj poradove cislo: \n");
	scanf("%d", &poradove);
	printf("zadaj cislo o posun dopredu: \n");
	scanf("%d", &dopredu);
	printf("Zadaj cislo o posun dozadu: \n");
	scanf("%d", &dozadu);
	
	printf("poradove cislo je %d \n", poradove);
	printf("Znak poradoveho cisla je %c \n", poradove);
	printf("Znak posunuty o %i dopredu je %c \n",dopredu,  poradove+dopredu);
	printf("Znak posunuty o %i dozadu je %c \n", dozadu, poradove-dozadu);
	return 0;
}
