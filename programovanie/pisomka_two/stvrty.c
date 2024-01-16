#include<stdio.h>

int main() {
	int mesiac;
	int rok;
	printf("Zadaj cislo mesiaca: ");
	scanf("%i", &mesiac);
	if (mesiac == 2){
		printf("Zadaj rok: ");
		scanf("%d", &rok);
		if (rok % 4 == 0){
			printf("Mesiac ma 29 dni. \n");
		}
		else {
			printf("Mesiac ma 28 dni. \n");
		}
	}
	else if (mesiac % 2 == 0 && mesiac < 9) {
		printf("Mesiac ma 30 dni \n");
	}
	else if (mesiac % 2 == 1 && mesiac < 9) {
		printf("Mesiac ma 31 dni \n");
	}
	else if (mesiac % 2 == 0 && mesiac >= 9){
		printf("Mesiac ma 31 dni \n");
	}
	else if (mesiac % 2 == 1 && mesiac >= 9){
		printf("Mesiac ma 30 dni \n");
	}
	// pravidlo plati do septembra ze neparne mesiace maju 31 dni od septembra maju parne mesiace 31 dni lebo v auguste a septembri ma mesiac 30 dni, ide o rok 2024 nie som si isty o ostatne roky :D
	return 0;
}
