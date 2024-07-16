#include<stdio.h>
int main(){
    int size = 7;
    int target = 10;
    printf("enter 7 numbers : ");
    int arr[size];
    int i;
    for (i = 0 ; i <size ; i++){
        scanf("%d",&arr[i]);
    }
    int a,j ;
    for ( a =0; a < size; a++){
        for ( j = a+1 ; j < size ; j++ ){
            if (arr[a] + arr[j] == target){
                printf("%d,%d",arr[a],arr[j]);
            }
        }       
    }
return 0;
}