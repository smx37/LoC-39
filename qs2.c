// Write a program that takes a number as input and checks whether it is 
// positive, negative or zero.

#include <stdio.h>
 
int main()
{
    int x;
 
    printf("Enter the number  ");
    scanf("%d", &x);
 
    if (x > 0)
        printf("%d is positive", x);
    else if (x < 0)
        printf("%d is negative", x);
    else if (x == 0)
        printf("%d is zero", x);
 
    return 0;
}