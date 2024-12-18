#include <stdio.h>
int main()
{
    int n = 1;
    int count = 12;
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    do
    {
        printf("%dx%d = %d\n", num, n, n * num);
        n++;//n=n+1
    } while (n <= count);

    return 0;
}