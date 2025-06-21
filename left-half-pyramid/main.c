/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int rows=7;
    for(int i=rows;i>=1; i--){
        for(int j=1;j<=i; j++){
            printf(" ");
        }
        for(int j=0; j<=rows-i;j++){
        printf("*");
        }

        printf("\n");
    }

}