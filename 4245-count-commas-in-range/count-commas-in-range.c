int countCommas(int n) {
    int dig=0;
    int count=0;
    int temp=n;
    while(n>0){
        dig=n%10;
        count++;
        n=n/10;

    }
    if(count<=3){
        return 0;
    }
    else{
        return temp-999;
    }
}