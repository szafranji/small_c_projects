#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE *file;

    const char* file_name = argv;

    if(!(file = fopen(file_name, "r"))) {
        printf("Error");
        exit(1);
    }
}
