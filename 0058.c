int lengthOfLastWord(char* s) {
    int count = 0;
    for (int i = 0;;i++) {
        if (*(s + i) == '\x0') return count;
        if ((*(s + i) == '\x20') && (*(s + i + 1) != '\x0') && (*(s + i + 1) != '\x20')) {
            count = 0;
        }
        if (*(s + i) != '\x20') count++;
    }
}