#include<stdio.h>
int main(){
    int selling price,cost price;
    scanf("%d %d",&selling price ,&cost price);
    if(selling price>cost price){
        printf("Profit");
    }
    else if(selling price<cost price){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
}