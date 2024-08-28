#include <stdio.h>

int BinarySearch(int arr[],int size,int find) {
    int left=0;
    int right=size-1;

    while (right>=left)
    {
        int mid = left+(right-left)/2;

        if (arr[mid]==find) {
            return mid;
        }
        if (arr[mid]<find) {
            left=mid+1;
        } else {
            right=mid-1;
        }
    }
    return -1;
    
}



int main ()   {
    int arr[]={2,5,7,8,9,17,28};
    int size=sizeof(arr)/sizeof(arr[0]);
    int find=17;
    int output=BinarySearch( arr, size, find);

    if (output!=-1) {
        printf("Element is present at index: %d\n",output);
    } else {
        printf("Element is not present");
    }
}