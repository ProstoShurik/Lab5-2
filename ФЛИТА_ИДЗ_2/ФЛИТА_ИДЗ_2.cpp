﻿// ФЛИТА_ИДЗ_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
void delete (char s[], char s2[]) {
    int i, j, k;

    for (k = 0; s2[k] != '\0'; k++) {
        for (i = j = 0; s[i] != '\0'; i++)
            if (s[i] != s2[k])
                s[j++] = s[i];
        s[j] = '\0';
    }
    s[strlen(s) - 1] = '\0';
    printf("%s\n", s);
}
int searcher(char inpt_mas[], char sample) {
    for (unsigned short i = 0; i < strlen(inpt_mas); i++) {
        if (isspace(inpt_mas[i])==0) {
            //printf("qwerty %c \n",inpt_mas[i]);
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
    //char samp = getchar();
    for (unsigned char pos = 0; pos < strlen(str_sample); pos++) {
        pointer = searcher(str_enum, str_sample[pos]);
        if (pointer != -1) {
            printf("%d", pointer);
            break;
        }
    }
    printf("%d", pointer);
    //printf("%d UKAZATEL'", searcher(str_sample, samp));
    //delete(str, str1);
    //printf("%s\n", str);
    return 0;
}




// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
