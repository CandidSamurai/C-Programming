#include <stdio.h>

int binarySearch(int arr[], int size, int key){
    int low = 0, high = size - 1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 5, 6, 17, 32, 55, 87, 92};
    int size = 8;
    int result = binarySearch(arr, size, 32);
    if(result != -1){
        printf("Element found at index: %d", result);
    }
    else{
        printf("Element not found.");
    }
    return 0;
}