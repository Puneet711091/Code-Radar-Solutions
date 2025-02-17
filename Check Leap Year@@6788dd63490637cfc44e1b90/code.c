// Your code here...
int main(){
    int a = 0;
    scanf("%d",&a);
    if(a%4==0&&a!=100||a%400==0){
        printf("Leap Year",&a);

    }
    else{
        printf("Not a Leap Year",&a);
    }
    return 0;
}