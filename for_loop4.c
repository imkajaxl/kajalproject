#include <stdio.h>
int main()
{
    int a, i, sum;
    printf("Enter a number: ");
    scanf("%d", &a);

    for(i=1; i<=a; i++)
    {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
    