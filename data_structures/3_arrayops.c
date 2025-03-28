#include <stdio.h>
#include <stdlib.h>

int main() {
    int option;
    int curr_size = 8;
    int iter = 0;
    int *array = malloc(curr_size * sizeof(int));
    int value = 0;
    int pos = 0;

    while(1) {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Update\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Insert operation selected.\n");
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter position: ");
                scanf("%d", &pos);
                break;
            case 2:
                printf("Delete operation selected.\n");
                break;
            case 3:
                printf("Search operation selected.\n");
                break;
            case 4:
                printf("Update operation selected.\n");
                break;
            case 5:
                printf("Display operation selected.\n");
                for (iter = 0; iter < curr_size; ++iter) {
                    printf("%d ", array[iter]);
                }
                printf("\n");
                break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid option! Please choose between 1 and 6.\n");
        }
    }
    
    return 0;
}
