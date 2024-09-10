#include<stdio.h>
//reverse a input number and dreverse it 

int main(){
    int num, revNum = 0, remainder, original;
    printf("Enter the number : ");
    scanf("%d",&num);
    original = num;
    while (num != 0)
    {
        remainder = num % 10 ;
        revNum = revNum * 10 + remainder ;
        num = num / 10;
    }
    printf("The reverse number : %d \n",revNum);
    return 0;
}