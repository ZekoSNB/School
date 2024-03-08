#include <stdio.h>

int main() {
    int number_of_elements;
    scanf("%d", &number_of_elements);
    
    int elements[number_of_elements];
    for (int i = 0; i < number_of_elements; i++) {
        scanf("%d", &elements[i]);
    }
    
    int result[number_of_elements];
    int num_queries;
    scanf("%d", &num_queries);
    
    for (int i = 0; i < num_queries; i++) {
        int inp;
        scanf("%d", &inp);
        
        int found = 0;
        for (int j = 0; j < number_of_elements; j++) {
            if (inp == elements[j]) {
                result[i] = j;
                found = 1;
                break;
            }
        }
        
        if (!found) {
            result[i] = -1;
        }
    }
    
    for (int i = 0; i < num_queries; i++) {
        printf("%d\n", result[i]);
    }
    
    return 0;
}