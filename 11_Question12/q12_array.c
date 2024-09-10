#include <stdio.h>
#include <stdlib.h>
// this code oporated some array oporation entered by the user.

void printEvenElements(int arr[], int n);
void printOddElements(int arr[], int n);
void calculateSumandAvg(int arr[], int n);
void findMaxandMin(int arr[], int n);
void printReverseArray(int arr[], int n);
void RemoveDuplicate(int arr[], int *n);
void ReEnterArray(int arr[], int *n);
int main()
{
    int terms, choice;
    printf("enter the required elements : ");
    scanf("%d", &terms);
    int array[terms];
    printf("enter the %d elements of array \n", terms);
    for (int i = 0; i < terms; i++)
    {
        scanf("%d", &array[i]);
    }
    while (1)
    {
        printf(" \n !---------Menu---------! \n");
        printf(" 1 = Re-enter array \n");
        printf(" 2 = Print even-valued elements \n");
        printf(" 3 = Print odd-valued elements \n");
        printf(" 4 = Calculate and print sum and average \n");
        printf(" 5 = Print maximum and minimum element \n");
        printf(" 6 = Remove duplicates \n");
        printf(" 7 = Print array in reverse order \n");
        printf(" 8 = Quit \n");
        printf(" 9 = Enter your choice: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            ReEnterArray(array, &terms);
            break;
        case 2:
            printEvenElements(array, terms);
            break;
        case 3:
            printOddElements(array, terms);
            break;
        case 4:
            calculateSumandAvg(array, terms);
            break;
        case 5:
            findMaxandMin(array, terms);
            break;
        case 6:
            RemoveDuplicate(array, &terms);
            break;
        case 7:
            printReverseArray(array, terms);
            break;
        case 8:
            printf("Quitting the program..");
            exit(0);
        default:
            printf("Invalid Choice please try againg.....");
        }
    }
    return 0;
}
void ReEnterArray(int arr[], int *n)
{
    printf("please Enter the new number of element: ");
    scanf("%d", n);
    printf("Enter %d elements: \n", *n);
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("New array elements are : \n");
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void printEvenElements(int arr[], int n)
{
    printf("Even-valued elements:\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
void printOddElements(int arr[], int n)
{
    printf("Odd-valued elements:\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
void calculateSumandAvg(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    double avg = (double)sum / n;
    printf(" the sum of number is %d & average is %.2f \n", sum, avg);
}
void findMaxandMin(int arr[], int n)
{
    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf(" the maximun number is %d, minimum %d \n", max, min);
}
void printReverseArray(int arr[], int n)
{
    printf("Array in reverse order : \n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void RemoveDuplicate(int arr[], int *n)
{
    int temp[*n];
    int newSize = 0;
    for (int i = 0; i < *n; i++)
    {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++)
        {
            if (arr[i] == temp[j])
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate)
        {
            temp[newSize++] = arr[i];
        }
    }
    for (int i = 0; i < newSize; i++)
    {
        arr[i] = temp[i];
    }
    *n = newSize;
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}