#include<stdio.h>
//  Program to compute the factors of a given number.
void checkfactor(int num);

int main(){
    int usernum;
    printf("Enter the +ve number : ");
    scanf("%d", &usernum);
    checkfactor(usernum);
    return 0;
}
void checkfactor( int num){

    printf("factors of %d are : ",num);
    for( int i = 1; i<= num /2; ++i){
        if( num % i == 0){
            printf("%d ",i);
        }
    }
    printf("%d \n",num);
    return;
}