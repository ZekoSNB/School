#include<stdio.h>

int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	if (a == b) {
		printf("Stvorec, so stranou %d cm \n", a);
	}
	else {
		if (a > b) {
			printf("Obdlznik so stranami %d cm, %d cm \n", a, b);
		}
		else {
			printf("Obdlznik so stranami %d cm, %d cm \n", b, a);
		}
	}
	return 0;
}
