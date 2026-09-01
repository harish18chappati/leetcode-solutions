int findFinalValue(int* nums, int numsSize, int original) {
    int count = 1;
    while (count) {
        count = 0;
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] == original) {
                count = 1;
                break;
            }
        }
        if (count) original *= 2;
    }
    return original;
}