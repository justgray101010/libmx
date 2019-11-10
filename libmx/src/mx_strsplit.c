#include "libmx.h"

char **mx_strsplit(char const *s, char c) {
    if (s == NULL) return NULL;
    int len = mx_count_words(s, c);
    char **arr = (char **) malloc(len * sizeof(char *));
    for (int j = 0; j < len; j++) {
        int count = 0;
        int f = 0;
        for (int i = 0; s[i] != 0; i++) {
            if (s[i] == c && f == 0) continue;
            else {
                f = 1;
                count++;
                if (s[i] == c && f == 1) {
                    break;
                }
            }
        }
        arr[j] = (char *)malloc((count - 1) * sizeof(char));
        while (*s == c) s++;
        for (int i = 0; i < count - 1; i++, s++) arr[j][i] = *s;
    }
    return arr;
}
