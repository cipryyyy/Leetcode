#include <limits.h>
int myAtoi(char* s){
    int i = 0, sign = 1;
    long long number = 0;
    while (*(s + i) == ' ') i++;
    if (*(s + i) == '+' || *(s + i) == '-'){
        if (*(s + i) == '-') sign = -1;
        i++; 
    }
    if (*(s + i) < '0' || *(s + i) > '9') return 0;
    while (*(s + i) >= '0' && *(s + i) <= '9'){
        number = number * 10 + (*(s + i) - '0');
        if (sign * number <= INT_MIN) return INT_MIN;
        if (sign * number >= INT_MAX) return INT_MAX;
        i++;
    }
    return (int)(sign * number);
}
