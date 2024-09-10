#include<stdio.h>
// this code compute the sum of the first n terms of the following series s= 1-2+3-4+5

int main(){
    int term;
    float sum = 0;
    printf("Enter the terms : ");
    scanf("%d", &term);

    for (int i = 1; i <= term; i++)
    {
        if(i%2 != 0){
            sum += i;
        }
        else{
            sum -= i;
        }
    }
    printf("the sum of %d terms %.2f", term, sum);
    
    return 0;
}