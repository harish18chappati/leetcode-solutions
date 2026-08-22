bool checkDivisibility(int n) {
    int sum=0;
    int pro=1;int dig;int temp=n;
        while(n>0){
            dig=n%10;
            sum=sum+dig;
            pro=pro*dig;
            n=n/10;

    }
    int k=pro+sum;
    if(temp%k==0){
        return true;
    }
    else {
        return false;
    }

}