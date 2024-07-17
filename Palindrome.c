#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("enter any number");
    scanf("%s",str);


    int length = strlen(str);
    int b=0;
    int j=length-1;
    int palindrome = 1;


    while(b<j){
            if (str[b] != str[j]){
                palindrome = 0;
                break;
            }
                j--;
                b++;
         }
            if (palindrome){
                printf("it is a palindrome");
            }else{
                printf("it is not a palindrome");

            }
                
    
    return 0;
}   