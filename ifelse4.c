#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if (a<0)
    {
        printf("invalid");
    }
    else if (a%5 ==0 && a%2 ==0)
    {
        printf("divisible by 2 and 5 both");
    }
    else if (a%2 ==0)
    {
        printf("divisible by 2");
    }
    else if (a%5 ==0)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 2 and 5 both");
    }
    return 0;
}