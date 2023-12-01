#include <stdio.h>
#include <limits.h>

int main() {
	int num;
	scanf("%i", &num);

	switch (num) {
		case 0:
			printf("nula \n");
			break;
		case 1 ... INT_MAX:
			printf("Kladne \n");
			break;
		case INT_MIN ... -1:
			printf("Zaporne \n");
			break;
	}
	return 0;
}
