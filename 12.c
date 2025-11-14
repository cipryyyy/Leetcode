#include <stdlib.h>

char* intToRoman(int num) {
    char *s = malloc(16);   
    int counter = 0;
    for (int pos = 3; pos >= 0; pos--) {
        static const int tens[] = {1, 10, 100, 1000};
        int cypher = (num / tens[pos]) % 10;

        switch(pos) {
            case 0:
                if (cypher == 4) {
                    s[counter++] = 'I';
                    s[counter++] = 'V';
                    break;
                }
                if (cypher == 9) {
                    s[counter++] = 'I';
                    s[counter++] = 'X';
                    break;
                }
                if (cypher >= 5) {
                    s[counter++] = 'V';
                    cypher -= 5;
                }
                for (int j = 0; j < cypher; j++) {
                    s[counter++] = 'I';
                }
                break;
            case 1:
                if (cypher == 4) {
                    s[counter++] = 'X';
                    s[counter++] = 'L';
                    break;
                }
                if (cypher == 9) {
                    s[counter++] = 'X';
                    s[counter++] = 'C';
                    break;
                }
                if (cypher >= 5) {
                    s[counter++] = 'L';
                    cypher -= 5;
                }
                for (int j = 0; j < cypher; j++) {
                    s[counter++] = 'X';
                }
            break;
            case 2:
                if (cypher == 4) {
                    s[counter++] = 'C';
                    s[counter++] = 'D';
                    break;
                }
                if (cypher == 9) {
                    s[counter++] = 'C';
                    s[counter++] = 'M';
                    break;
                }
                if (cypher >= 5) {
                    s[counter++] = 'D';
                    cypher -= 5;
                }
                for (int j = 0; j < cypher; j++) {
                    s[counter++] = 'C';
                }
            break;
            case 3:
                for (int j = 0; j < cypher; j++) {
                    s[counter++] = 'M';
                }
            break;
        }
    }
    s[counter] = '\0';
    return s;
}