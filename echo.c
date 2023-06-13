#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if(argc == 1) printf("\n");

}

int find_arrow(int argc, char**argv) {
    for(int i = 1; i < argc-1; i++) {
        if(argv[i] == '>') return 1;
        else return 0;
    }
}
