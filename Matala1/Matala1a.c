#include<stdio.h>

int main (){

    int pure,weight,sum,count=0;
    double averge;
    printf("Welcome, please enter the weights of each ingredient:\n");
    
    while(count<11){
        if(scanf("%d",&weight)!=1){
            return 0;
        }
        if(weight<0){
            break;
        } 
        count++;
        sum=sum+weight;
    }
        pure=count*10;
        averge=sum/count;
        if(count<3) {    
            return printf("Not enough ingredients!\n");
        }
        else if(count>10){
            return printf("Too many ingredients!\n");
        }
        printf("The final product weight %.3f pounds and is %d percent pure",averge,pure);
    }
