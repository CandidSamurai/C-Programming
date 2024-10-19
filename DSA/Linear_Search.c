#include <stdio.h>

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 5, 10, 19, 27, 63, 94};
    int size = 7;
    printf("Element found at index: %d", linearSearch(arr,size,27));
    return 0;
}