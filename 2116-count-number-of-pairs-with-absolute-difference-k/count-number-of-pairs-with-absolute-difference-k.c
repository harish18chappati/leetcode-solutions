int countKDifference(int* nums, int numsSize, int k) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            
            int diff = nums[i] - nums[j];

            if (diff < 0) {
                diff = -diff;
            }

            if (diff == k) {
                count++;
            }
        }
    }

    return count;
}