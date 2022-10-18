#include<stdio.h>
void linearSearch(int arr[], int element, int size){
    for(int i =0 ; i<size; i++){
        if(arr[i]==element){
            printf("Element found at index %d\n",i);
            break;
        }
        
        
        
        
        
        

    }
    
}

int binarySearch(int arr[], int element, int size){
    int low = 0;
    int high = size-1;
    int mid;
    while(low<=high){
        mid = (high + low)/2;
        if(element==arr[mid]){
            printf("Element is found at index %d ",mid);
            return mid;
        }
        if(element>arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    binarySearch(arr,5,size);
    // linearSearch(arr,4,size); time comlplexity is O(n)
    return 0;
}
