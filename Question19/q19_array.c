#include<stdio.h>
/* Given two ordered arrays of integers, write a program to merge the two-arrays to get an ordered array.
*/
void mergeArray( int arr1[], int n1, int arr2[], int n2, int resultArr[]){
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        resultArr[k++] = arr1[i++];
        else
        resultArr[k++] = arr2[j++];
    }
    while (i < n1)
    {
        resultArr[k++] = arr1[i++];
    }
    while (j < n2)
    {
        resultArr[k++] = arr2[j++];
    }
    
}

int main(){
    int arr1[] = { 1,3,5,7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2,4,6,8};
    int n2 = sizeof(arr2) / sizeof ( arr2[0]);
    int mergedArrays[ n1 + n2];
    mergeArray(arr1, n1, arr2, n2, mergedArrays);
    printf( "Merged Array\t");
    for( int i = 0; i< n1+n2; i++){
        printf("%d", mergedArrays[i]);
    }
    printf("\n");
    return 0;
}