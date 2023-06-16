#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    FILE *fp;
    int c, lines_num = 0;

    fp = fopen(argv[1], "r");
    if(!fp) {
        perror(argv[1]);
    }
    
    while((c = fgetc(fp)) != EOF) {
        if(c == '\n') lines_num++;
    }
    printf("%d\n", lines_num);
}
