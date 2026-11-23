#include <stdio.h>
int main() {
    char a[11];
    printf("Enter your character: ");
    scanf("%10[^\n] ", a);
    
    printf("Miss Kajal, your favourite Marvel character is %s", a);

    return 0;
}