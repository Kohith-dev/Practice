#include<stdio.h>
int main(){
    int size = 9;
    int arr[size];
    int i;
    printf("enter some numbers");
    for(i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int a;
    int b;
    for (a = 0; a<size-1; a++){
        for(b = a+1; b<size-1; b++){
            if( arr[a] > arr[b]){
                int temp =  arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
    }
    for(i = 0; i<size; i++){
        printf("%d",arr[i]);
    }

    return 0;
}
