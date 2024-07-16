#include<stdio.h>
int main(){
    int a = 7;
    int arr[a];
    int target = 8;
    int i;
    printf("enter 7 numbers");
    
    for(i = 0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    int b = 0,c = 7;
            while( b<c){
                if (arr[b]+arr[c] < target){
                b = b+1;
            }
            else if( arr[b]+arr[c] > target){
                c = c -1;
            }
            else if (arr[b]+arr[c] == target){
               
                printf("%d,%d",arr[c],arr[b]);
                b++;
                c--;
            }
            }
                
            
            

    return 0;
}