#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int countWords(char *str) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int totalWords = countWords(str);
    char **words = malloc((totalWords + 1) * sizeof(char *));

    if (words == NULL) {
        return NULL;
    }

    for (int b = 0, i = 0; str[i] != '\0' && b < totalWords; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v') {
            continue;
        }

        char *foundWord = str + i;
        int length = 0;

        while (str[i] != ' ' && str[i] != '\0') {
            length++;
            i++;
        }

        words[b] = malloc((length + 1) * sizeof(char));
        if (words[b] == NULL) {
            while (b > 0) {
                free(words[--b]);
            }
            free(words);
            return NULL;
        }

        for (int c = 0; *foundWord != ' ' && *foundWord != '\0'; c++) {
            words[b][c] = *foundWord++;
        }

        words[b][length] = '\0';
        b++;
    }

    words[totalWords] = NULL;
    return words;
}

