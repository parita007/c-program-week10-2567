#include <stdio.h>
void main()
{
    int i;
    int count = 12;
    int num =
        printf("Enter number: ");
    scanf("%d", &num);
    for (int i = 1; i <= count; i++)
    {
        printf("%dx%d = %d\n ", num, i, i * num);
    }

    return 0;
}