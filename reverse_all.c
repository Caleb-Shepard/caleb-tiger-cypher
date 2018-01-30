// Reverses argument order and letter order for each argument
#include "string.h"
#include "stdio.h"
int main(int argc,char **argv){
    for(int i=argc-1;i>0; i--){
        for(int c=strlen(argv[i]);c>-1;c--)
            putchar(argv[i][c]);
    putchar(' ');
    }
}
