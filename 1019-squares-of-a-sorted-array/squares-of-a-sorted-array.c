int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *ans = (int*)malloc(numsSize * sizeof(int));

    int left = 0;
    int right = numsSize - 1;
    int i;

    *returnSize = numsSize;

    for (i = numsSize - 1; i >= 0; i--) {
        if (abs(nums[left]) > abs(nums[right])) {
            ans[i] = nums[left] * nums[left];
            left++;
        } else {
            ans[i] = nums[right] * nums[right];
            right--;
        }
    }

    return ans;
}