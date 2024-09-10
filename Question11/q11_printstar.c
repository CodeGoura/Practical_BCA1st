#include<stdio.h>
//print stars certer 2i-1 formate rows taken by user
int main(){
    int rows;
    printf("enter the rows number : ");
    scanf("%d",&rows);
    for( int i = 1; i<= rows; i++){
        for( int j = 1; j <= rows-i; j++){
            printf(" ");
        }
        for(int k=1; k <= (2 * i - 1); k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}