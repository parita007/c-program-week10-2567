#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
int main()
{
    //int selection;
    while (1)
    {
        int selection = menu();
        switch (selection)
        {
        case '1':
            printf("\nselection 1\n");
            
            break;
        case '2':
            printf("\nselection 2\n");
            
            break;
        case '3':
            printf("\nselection 3\n");
            
            break;
        case '4':
            printf("\nselection 4\n");
            
            break;
        case '5':
            printf("\nExit\n");
            exit(0);
            break;

        default:
            printf("Invalib Selection\n");
            selection = menu();
            break;
        }
    }
}