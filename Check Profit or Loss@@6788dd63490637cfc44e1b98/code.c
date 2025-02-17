#include<stdio.h>
int main(){
    int sellingprice,costprice;
    scanf("%d %d",&sellingprice ,&costprice);
    if(costprice < sellingprice){
        printf("Loss");
    }
    else if(costprice > sellingprice){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
}