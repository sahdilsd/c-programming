/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAnagram(const char *str1, const char *str2) {
    int count[256] = {0}; 

    if (strlen(str1) != strlen(str2)) return 0;
    for (int i = 0; str1[i]; i++) {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) return 0;
    }

    return 1;
}

int main() {
    char word1[100], word2[100];

    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf("%s", word2);

    if (isAnagram(word1, word2)) {
        printf("'%s' and '%s' are anagrams.\n", word1, word2);
    } else {
        printf("'%s' and '%s' are NOT anagrams.\n", word1, word2);
    }

    return 0;
}