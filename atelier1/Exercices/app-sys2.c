#include <stdio.h>
#include <stdlib.h>

void decodePass();

void fail(){
    printf("Perdu ! Essaie encore ;)\n");
}

int main(){
    void (*func)() = fail;
    char buf[128];
    printf("Saisie du texte: ");
    fgets(buf, 133, stdin);
    func();

    exit(0);
}

// Compil with gcc app-sys2.c decodepass.c -m32 -o app-sys2 -fno-stack-protector
