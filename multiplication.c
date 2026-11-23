#include <stdio.h> 
int main ()
{
    int a, b, c , mul;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    mul= a*b*c;
    printf("mul= %d\n"  ,mul);
    return 0;
}