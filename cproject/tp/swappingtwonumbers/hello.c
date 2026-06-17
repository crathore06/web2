// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b;
    //Prompt the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    //Display the numbers before swapping
    printf("Before swapping: a = %d, b = %d\n", a,b);
    
    //Swap the numbers without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;
    
    //Display the numbers after swapping
    printf("After swapping: a = %d, b = %d\n",a,b);
    return 0;
}