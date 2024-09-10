#include<stdio.h>
//To compute the sum of the first n terms Harmonic series.

void harmonicsum( int n);

void main(){
    int term;
    printf("Please Enter the terms: ");
    scanf("%d", &term);
    harmonicsum(term);
    return ;
}

void harmonicsum( int n){
    float sum = 0.0;
    for (float i = 1 ; i<= n ; i++){
        sum += 1.0/i;
    }
    printf(" the sum of first %d terms of the series is : %.2f",n,sum);
}