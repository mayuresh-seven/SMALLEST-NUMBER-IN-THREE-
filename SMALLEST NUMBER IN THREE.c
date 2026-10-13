#include<stdio.h>
int main()
{
int num1, num2, num3, smallest;

    printf("Enter three different  numbers :");
    scanf("%d %d %d ", &num1, &num2, &num3);
    if (num1<num2 && num1<num3)
       smallest = num1;
    else if (num2<num3 && num2<num1)
            smallest = num2;
    else 
            smallest = num3;
    printf("The smallest number  is : %d\n", smallest);
   return 0;
    
}