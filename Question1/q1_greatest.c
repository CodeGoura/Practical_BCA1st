#include<stdio.h>
// this program take input from user and find the greatest number amoung.

void findBig(int a, int b, int c);

int main(){
    int num1, num2, num3;
    printf( "please enter 1st number: ");
    scanf("%d",&num1);
    printf( "please enter 2st number: ");
    scanf("%d",&num2);
    printf( "please enter 3st number: ");
    scanf("%d",&num3);
    findBig(num1,num2,num3);

    return 0;

}

void findBig(int a, int b, int c){
if(a<b){
    if(b>c){
        printf("%d is greatest number \n", b);
    }
    else{
        printf("%d is greatest number \n",c);
    }
}else{
    if(a>c){
        printf("%d is greatest number \n",a);
    }
    else{
        printf("%d is greatest number \n",c);
    }
} 

}