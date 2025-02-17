#include<stdio.h>
int main(){
    int sellingprice,costprice;
    scanf("%d %d",&sellingprice ,&costprice);
    if(costprice < sellingprice){
        printf("Profit");
    }
    else if(costprice > sellingprice){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
}