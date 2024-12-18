#include <stdio.h>
#include <stdlib.h>
int menu()
{
    printf("MENU\n");
    printf("1.Total of All Top Score for the week\n");
    printf("2.Total of All High Score for the week\n");
    printf("3.Total Machine High Score for the week\n");
    printf("4.Machine High Score for the week\n");
    printf("5.Exit\n");
    printf("Enter Selection:");

    int selection = getchar();
    printf("%c", selection);
    getchar();
    return selection;
}