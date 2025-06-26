/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "silent";
    char str2[100] = "listen";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2) {
        printf("Not Anagrams\n");
        return 0;
    }

 
    for(int i = 0; i < len1 - 1; i++) {
        for(int j = i + 1; j < len1; j++) {
            if(str1[i] > str1[j]) {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    for(int i = 0; i < len2 - 1; i++) {
        for(int j = i + 1; j < len2; j++) {
            if(str2[i] > str2[j]) {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    if(strcmp(str1, str2) == 0) {
        printf(" it's a Anagrams\n");
    } else {
        printf("its Not a Anagrams\n");
    }

    return 0;
}