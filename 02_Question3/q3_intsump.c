#include<stdio.h>
// this code take an int number as input and give the sum and product of the digits it contains.
int main(){
int num;
int digit, sum=0, product=1;
printf("Enter The number : ");
scanf("%d",&num);
while (num>0)
{
    digit = num % 10 ;
    sum += digit;
    product *= digit;

    num /= 10;
}
printf("Sum of all digits : %d ",sum);
printf("product of digits : %d",product);

return 0;
}