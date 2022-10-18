#include<stdio.h>
void display(int arr[], int n){
    for(int i = 0; i< n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
//     printf("\n");//     printf("\n");//     printf("\n");//     printf("\n");//     printf("\n");//     printf("\n");
}

int indInsertion(int arr[],int size,int element, int capacity, int index){
    if(size>capacity){
        return -1;
        
        
    }
    int n;
    for(int i = size-1;i>=index;i--){
        //Swap
    
        arr[i+1] = arr[i];
        n = i;

    }
    arr[index] = element;
    return 1;
}


int main()
{
    int arr[100] = {1,2,6,7,8};
    int size = 4,element = 45,index = 3;
    display(arr,size);
    indInsertion(arr, size, element, 100, index);
    size++;
    display(arr,size);
    return 0;
}
