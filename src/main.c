#include "libmx.h"

static int get_islands_number(char *argv[]) {
    int fd = open(argv[1], O_RDONLY);
    char *firstline = (char*) malloc(sizeof(char)*12);
    mx_read_line(&firstline, 4, '\n', fd);
    return mx_atoi(firstline);
}

static island **mx_get_island_arr(int number, char *str) {
    island **arr = (island**) malloc(sizeof(island) * number);
    for (int i = 0; i < number; i++) {
        arr[i]->name = NULL;
        arr[i]->distance_between_islands = (int*) malloc(sizeof(int) * number);
        arr[i]->bridge_to_islands = (char*) malloc(sizeof(char*) * number);
    }
    char **lines = mx_strsplit(str, '\n');
    for (int i = 0; i < number; i++) {
        
    }
}

int main(int argc, char *argv[]) {
    argc = 0;
    char *file = mx_file_to_str(argv[1]);
    int number = get_islands_number(argv);
    island **arr = mx_get_island_arr(number, file);
    return 0;
}
