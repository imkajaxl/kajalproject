#include <stdio.h> 
int main ()
{
 float a, b, c , div;
    printf("Enter the numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    div = a/b/c;
    printf("division = %.4f"  ,div);
    return 0;
}