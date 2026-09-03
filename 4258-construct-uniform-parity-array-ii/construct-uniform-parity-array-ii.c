#include<limits.h>
bool uniformArray(int* nums1, int nums1Size) {
    
        int min=INT_MAX;
        for(int i=0;i<nums1Size;i++){
            if(nums1[i]%2==1 && nums1[i]<min){
                min=nums1[i];

            }
        }
        for(int j=0;j<nums1Size;j++){
            if(nums1[j]%2==0 &&  min!=INT_MAX && nums1[j]<min){
                return false;
            }
        }
        return true;
    }