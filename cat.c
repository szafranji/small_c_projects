#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE *file;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    const char *file_name = argv[1];

    if(!(file = fopen(file_name, "r"))) {
        printf("Error!");
        exit(1);
    }
    while((read = getline(&line, &len, file)) != -1) {
        printf("%s", line);
    }

    fclose(file);
}
