#include <stdio.h>

int main() {
   const char *weekdays[] = {
        "Pondelok",
        "Utorok",
        "Streda",
        "Stvrtok",
        "Piatok",
        "Sobota",
	"Nedela",
    };

    int dayNumber;

    printf("zadaj cislo od 1-7 a vypise ti den:  ");
    scanf("%d", &dayNumber);

    
    if (dayNumber >= 1 && dayNumber <= 7) {
        printf("den je: %s\n", weekdays[dayNumber - 1]);
    } else {
        printf("Neni zadane cislo od 1 do 7\n");
    }

    return 0;
}
