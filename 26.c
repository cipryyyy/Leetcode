int removeDuplicates(int* nums, int numsSize) {
    int count = 1;
    short pivot = *nums;
    for (int i = 1; i < numsSize; i++) {
        if (*(nums + i) <= pivot) continue;
        
        *(nums + count) = *(nums + i);
        count++;
        pivot = *(nums + i);
    }
    return count;
}