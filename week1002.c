#include <stdio.h>
int main()
{
    int n = 1;
    int sum = 0;
    int num;
    printf("Enter numer: ");
    scanf("%d", &num);
    while (n <= 12)
    {
        printf("%dx%d = %d\n", num,n, n * num);
        sum = sum + n;
        n++;
    }
    printf("sum = %d", sum);
    return 0;
}