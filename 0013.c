int romanToInt(char* s) {
    int value = 0;
    for (int i = 0; ; i++) {
        if (s[i] == '\x0') return value;
        switch(s[i]) {
            case 'I':
            if ((s[i + 1] == 'V') || s[i + 1] == 'X') value -= 1;
            else value += 1;
            break;
            case 'V':
            value += 5;
            break;
            case 'X':
            if ((s[i + 1] == 'L') || s[i + 1] == 'C') value -= 10;
            else value += 10;
            break;
            case 'L':
            value += 50;
            break;
            case 'C':
            if ((s[i + 1] == 'D') || s[i + 1] == 'M') value -= 100;
            else value += 100;
            break;
            case 'D':
            value += 500;
            break;
            case 'M':
            value += 1000;
            break;
        }
    }
}
