# include<stdio.h>
// program to swap two numbers using macro.
#define SWAP(a, b) \
{ \
(a) = (a) + (b); \
(b) = (a) - (b); \
(a) = (a) - (b); \
}
int main(){
    int num1, num2;
    printf("Enter two numbers");
    scanf("%d %d", &num1, &num2);
    printf("Before swap num1 = %d, num2 = %d \n",num1, num2);
    SWAP(num1,num2);
    printf("_After swap num1 = %d, num2 = %d \n",num1, num2);
    return 0;
}