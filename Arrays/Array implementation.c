#include<stdio.h>
int main(){
    
    int size;
    int Array1[100];
    
    printf("Insert the size of the array; ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Insert the values into the Array: ");
    scanf("%d",&Array1[i]);
    };
    printf("[");
    for(int i=0;i<size;i++){
        
        printf("%d,",Array1[i]);
            
    };
    printf("]");




    return 0;
}
