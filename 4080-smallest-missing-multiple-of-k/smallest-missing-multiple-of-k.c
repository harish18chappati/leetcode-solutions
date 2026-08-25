int missingMultiple(int* nums, int numsSize, int k) {
    for (int j = 0; ; j++) {
        int count = 0;

        for (int i = 0; i < numsSize; i++) {
            if ((j + 1) * k == nums[i]) {
                count = 1;
                break;
            }
        }

        if (count == 0) {
            return (j + 1) * k;
        }
    }
}