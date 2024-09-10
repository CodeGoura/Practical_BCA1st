#include<stdio.h>
#include<stdlib.h>
// find sum and average of n elements entered by the user.
int main(){
    int n_element, i;
    float *arr, sum = 0.0, average;

    printf("Enter the number of element :");
    scanf("%d",&n_element);
    arr = (float * )malloc( n_element * sizeof(float));
    if( arr == NULL){
        printf("Memory allocation failed \n");
        return -1;
    }
    printf("Enter the elements : \n");
    for(i = 0; i<n_element;i++){
        printf( "Element : %d\t",i+1);
        scanf("%f", &arr[i]);
    }
    for( i=0; i<n_element; i++){
        sum += arr[i];
    }
    average = sum / n_element;
    printf("Sum : %.2f \t",sum );
    printf("Average : %.2f \n",average);
    free(arr);
    return 0;
}