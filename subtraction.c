#include <stdio.h> 
int main ()
{
    int a, b, c , sub;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    sub= a - b - c;
    printf("Subtraction = %d" ,sub);
    return 0;
}