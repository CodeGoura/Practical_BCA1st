#include <stdio.h>
// this programe check the prime number and show the prime number list 1 to 100.

void checkPrime(int num);
int main()
{
    int inputNum;
    printf("Enter a +ve number : ");
    scanf("%d", &inputNum);
    checkPrime(inputNum);
    printf("the prime numbers under 100 are : \n");
    for (int i = 2; i <= 100; i++)
    {
        int isprime = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime)
            {
                printf("%d ", i);
            }
    }
    return 0;
}
void checkPrime(int num)
{
    int flag = 0;

    if (num <= 1)
    {
        flag = 1;
        printf("%d is not a prime number \n", num);
        return;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%d is not a prime number \n", num);
    }
    else
    {
        printf("%d is a prime number \n", num);
    }
}