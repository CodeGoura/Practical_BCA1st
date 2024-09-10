#include<stdio.h>
// Function to swap the values of two variables

void alter( int *x, int *y){
    // Adding 5 to each value 
    *x += 5;
    *y += 5;
}
int main(){
    int num1,num2;
    printf("enter two number :");
    scanf("%d %d",&num1, &num2);
    printf("Before alter function:\n");
    printf(" Number1 = %d & Number2 = %d \n", num1, num2);
    alter( &num1, &num2);
    printf("After alter function:\n");
    printf("Number1 + 5 = %d & Number2 + 5 = %d",num1, num2);    
    return 0;

}