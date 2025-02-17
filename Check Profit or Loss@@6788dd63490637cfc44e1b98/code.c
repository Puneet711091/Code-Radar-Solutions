#include<stdio.h>
int main(){
    int sellingprice,costprice;
    scanf("%d %d",&sellingprice ,&costprice);
    if(sellingprice>costprice){
        printf("Profit");
    }
    else if(sellingprice<costprice);{
        printf("Loss");
    }
    
}