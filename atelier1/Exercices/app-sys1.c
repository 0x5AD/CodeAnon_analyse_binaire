#include <stdio.h>
#include <stdlib.h>

void decodePass1();

int main(){
    int check = 0x04030201;
    char buf[20];

    printf("check = 0x%08x\n", check);

    fgets(buf, 25, stdin);

    printf("check = 0x%08x\n", check);

    if ((check != 0x04030201) && (check != 0x5AD005AD)){
        printf("You are on the right way !\n");
    }
    else if (check == 0x5AD005AD){
        printf("Good Job !\n");
        decodePass1();
    }

    exit(0);
}

// Compil with gcc app-sys1.c decodepass.c -m32 -o app-sys1 -fno-stack-protector
