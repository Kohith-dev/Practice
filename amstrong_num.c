#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    int given_num = abs(num);
    int i = given_num;
    int count = 0;
    while(i != 0){
       i = i / 10;
       count++;   
    }
    int j;
    int rem;
    int result = 0;
    j = given_num;
    while(j != 0){
        rem = j % 10;
       result = result + pow(rem,count);
        j = j/10;
    }
    printf("%d",result);

    if (given_num == result){
        printf("it is a amstrong number");
    }else{
        printf("it is not a amstrong number");
    }

    return 0;
}