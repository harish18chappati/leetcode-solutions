int largestAltitude(int* gain, int gainSize) {
    int arr[gainSize];
    int sum=0;
    for(int i=0;i<gainSize;i++){
        sum=sum+gain[i];
        arr[i]=sum;
    }
int max=arr[0];
for(int j=0;j<gainSize;j++)
{
    if(arr[j]>max)
    {
        max=arr[j];
    }
}
if(max<0)
return 0;
else 
return max;
}