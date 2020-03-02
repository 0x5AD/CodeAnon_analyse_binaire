#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ptrace.h>

char *getPass();

int main(int argc, char *argv[]){
    char password[32];

    if (ptrace(PTRACE_TRACEME, 0, 1, 0) >= 0)
        memcpy(password, getPass(), 32);

    printf(argv[1]);

    return 0;
}

// Compil with gcc app-sys3.c getpass.c -m32 -o app-sys3
