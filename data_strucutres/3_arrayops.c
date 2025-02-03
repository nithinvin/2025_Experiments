#include <stdio.h>

int main() {
    int option;

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
