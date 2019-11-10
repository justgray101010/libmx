#include "libmx.h"

int mx_count_words(const char *str, const char delim) {

    char *editedstr = mx_del_extra_spaces(str);
    int counter = 0;

    if (editedstr) {
        counter++;
        while (*editedstr) {
            if (*editedstr == delim)
                counter++;
            editedstr++;
        }
    }
    return counter;
}
