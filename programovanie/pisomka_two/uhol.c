#include<stdio.h>

int main() {
	int uhol;
	printf("Zadaj Uhol trojuholnika: ");
	scanf("%d", &uhol);
/*	if (uhol < 0 || uhol > 360){
		return 0;
} */
	if (uhol == 90) {
		printf("Jedna sa o pravy uhol \n");
	}
	else if (uhol > 0 && uhol < 90) {
		printf("Jedna sa o ostry uhol \n");
	}
	else if (uhol > 90 && uhol < 180){
		printf("Jedna sa o tupy uhol \n");
	}
	return 0;
}
