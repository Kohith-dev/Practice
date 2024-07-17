#include<stdio.h>
int main(){
    int a;
    printf("enter a : ");
    scanf("%d",&a);
    int i;
    int j;
    
    printf("2, ");

    for (i = 3; i<=a; i++){
        int is_not_prime = 0;
            for(j =2 ; j<i; j++){
                if(i%j == 0) 
                    is_not_prime = 1;

        } 
        if(!is_not_prime)
        printf("%d,", i);    
    }

    return 0;
}