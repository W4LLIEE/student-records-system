#include "sysLibrary.h"

int main() {

    int intOpt;
    menu opts;

    printf("\n\nStudent Records System\n");
    printf("______________________\n\n\n");

    do {

        printf("\nChoose an option (1-3)\n\n");
        printf("_____________________\n\n");
        printf("1. Add new student\n2. List all students\n3. Exit program\n");
        printf("_____________________\n\nOption: ");
        scanf("%d", &intOpt);

        opts = intOpt;

        switch(opts) {
            case add:
                addStd();
                break;
            case list:
                listStd();
                break;
            case exit:
                printf("Exitting program. Goodbye...\n");
                break;
            default:
                printf("\nInvalid Option. Please Try Again.\n");
        }
    } while (opts != exit);

    return 0;

}