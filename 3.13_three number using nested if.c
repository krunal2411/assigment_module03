//Write a program to find the Max number from the given three number using

#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nEnter Three Numbers : ");
    scanf("%d%d%d",&a,&b,&c);//100 98 105
    if(a>b){
        if(a>c){
            printf("\n%d is greatest number ",a);
        }else{
            printf("\n%d is greatest number ",c);
        }
    }else if(b>a){
        if(b>c){
            printf("\n%d is greatest number ",b);
        }else{
            printf("\n%d is greatest number ",c);
        }
    }else{
        printf("\n%d is greatest number ",a);
    }
    return 0;
}
