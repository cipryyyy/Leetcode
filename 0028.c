int len(char* str) {
    int len = 0;
    while (*(str + len) != '\x0') {
        len++;
    }
    return len;
}
int strStr(char* haystack, char* needle) {
    int trg = len(haystack);
    int src = len(needle);
    for (int i = 0; i <= (trg - src); i++) {
        for (int j = 0; j < src; j++) {
            if (*(haystack + i + j) != *(needle + j)) {
                break;
            }
            if (j == src-1) {
                return i;
            }
        }
    }
    return -1;
}