#include<stdio.h>
//program that swaps two numbers using pointers.
void swap( int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main (){
    int num1, num2;
    printf("Enter two numbers \n");
    scanf("%d %d",&num1, &num2);
    printf("before swaping : Num1 = %d & Num2 = %d \n", num1, num2);
    swap(&num1, &num2);
    printf("After Swaping : Num1 = %d & Num2 = %d \n",num1, num2);
    return 0;
}