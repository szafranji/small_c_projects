#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv) {
    if(argc == 1) printf("\n");
    else if(argc > 2) str_output(argc, argv);

}

void str_output(int argc, char **argv) {
    // use this function only for output 
    // if we don't have > in argv

    for(int i = 1; i < argc; i++) printf("%s ", argv[i]);

    printf("\n");
}


int find_indexes(int argc, char **argv) {
    for(int i = 1; i < argc-1; i++) {
        if(argv[i] == '>') return i;
    }
}

int find_arrow(int argc, char**argv) {
    for(int i = 1; i < argc-1; i++) {
        if(argv[i] == '!') return 1;
        else return 0;
    }
}

