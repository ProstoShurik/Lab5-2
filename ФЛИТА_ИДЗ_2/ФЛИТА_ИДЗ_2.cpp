
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int searcher(char inpt_mas[], char sample) {
    for (unsigned short i = 0; i < strlen(inpt_mas); i++) {
        if (isspace(inpt_mas[i])==0) {
            
            if (inpt_mas[i] == sample) {
                return (int)i;
            }
        }
    }
    return -1;
}
int main() {
    char str_sample[128];
    char str_enum[128];
    fgets(str_sample, 128, stdin);
    fgets(str_enum, 128, stdin);
    int pointer=-1;
    unsigned char flag = 0;
    
    for (unsigned char pos = 0; pos < strlen(str_sample); pos++) {
        pointer = searcher(str_enum, str_sample[pos]);
        //pointer = searcher(str_sample, str_enum[pos]);
        if (pointer != -1) {
            printf("%d", pos);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("-1");

    }
    
    return 0;
}

