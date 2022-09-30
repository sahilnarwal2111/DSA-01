#include<stdio.h>

void display(int arr[], int n){
    for(int i = 0; i< n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[],int size,int element, int capacity, int index){
    if(size>capacity){
        return -1;
    }
    int n;
    for(int i = size-1;i>=index;i--){
        //Swap//Swap//Swap
    
        arr[i+1] = arr[i];
        n = i;

    }
    arr[index] = element;
    return 1;
}

void indDeletion(int arr[],int size, int index){
    
    int n;
    for(int i = index;i<size;i++){
        //Swap code
        arr[i] = arr[i+1];
    }
    
}

int main()
{
    int arr[100] = {1,2,6,7,8};
    int size = 4,element = 45,index = 3;
    display(arr,size);
    indInsertion(arr, size,45 ,100, index);
    size++;
    display(arr,size);
    indDeletion(arr,size,1);
    size--;
    display(arr,size);
    return 0;

}
