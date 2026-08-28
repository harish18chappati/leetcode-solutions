int findSpecialInteger(int* arr, int arrSize) {
    if(arrSize==1){
        return arr[0];
    }
    
    int max=arrSize/4;
    for(int i=0;i<arrSize;i++){
        int count=1;
        for(int j=i+1;j<arrSize;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            return arr[i];
        }
    }
    return 0;
}