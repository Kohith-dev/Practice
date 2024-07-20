#include<stdio.h>
int main(){
    int size = 5;
    int target =4 ;
    int arr[size];
    int i;
    printf("enter some numbers");
    for (i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
   
    for (i = 0; i< size; i++){
        if(arr[i] == target){
            printf("%d",i);
        }
    }

    return 0;

}