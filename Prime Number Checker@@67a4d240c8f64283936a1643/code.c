
int isPrime(int num){
    int isPrime=1;
    if(num==1||num==0){
        isPrime=0;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            isPrime =0;
        }
    }
    return isPrime;
}