#include<stdio.h>
#include<stdlib.h>

struct myArray{
    
    int total_size ;
    int used_size;
    int *ptr;
};

void createArray(struct myArray * a, int tsize, int usize){
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int *) malloc(tsize*sizeof(int));
    a->used_size = usize;
    a->total_size = tsize;
    a->ptr = (int *)malloc(tsize*sizeof(int));
}
//function to display
void show(struct myArray *a){
    for(int i = 0; i<a->used_size; i++){
        printf("%d\n",(a->ptr[i]));
    }
}

void setVal(struct myArray *a){
    int n;
    for (int i = 0; i < (a->used_size); i++)
    {
        printf("Enter element %d\n",i);
        scanf("%d",&n);
        (a->ptr)[i] = n;
    }
    

}

//Now calling all functions in main
int main()
{
    struct myArray marks;
    createArray(&marks,100,20);
    setVal(&marks);
    show(&marks);
    return 0;
}
