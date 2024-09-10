#include <stdio.h>
// all arithmatic op using switch case.

int main()
{

    int num1, num2,op;
    printf("enter 1st number :");
    scanf("%d", &num1);
    printf("enter 2nd number :");
    scanf("%d", &num2);
    printf("enter operation choice 1 for + 2 for -  3 for * 4 for / : \n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf(" the sum of given number is %d", num1 + num2);
        break;
    case 2:
        printf(" the difference of given number is %d", num1 - num2);
        break;
    case 3:
        printf(" the multipication of given number is %d", num1 * num2);
        break;
    case 4:
        printf(" the division of given number is %d", num1 / num2);
        break;
        return 0;
    }
}