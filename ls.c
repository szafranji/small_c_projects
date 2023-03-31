#include <stdio.h>
#include <dirent.h>
#include <string.h>

void _ls(const char *dir_name) {
    DIR *dir;
    struct dirent *entry;

    if((dir = opendir(dir_name)) == NULL) {
        printf("Couldn't open this directory");
    }

    else {
        while((entry = readdir(dir)) != NULL) {
            if((strcmp(entry->d_name, ".") == 0) || (strcmp(entry->d_name, "..") == 0)) continue;
            printf("%s \n", entry->d_name);
        }
    }

    closedir(dir);
}


int main(int args, char** argv) {
    if(args == 1) _ls(".");
    else _ls(argv[1]);
    return 0;
}
