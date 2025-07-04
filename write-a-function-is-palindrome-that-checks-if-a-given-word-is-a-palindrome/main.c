/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    char word[100];

    printf("Enter a word to check for palindrome: ");
    scanf("%s", word);

    if (isPalindrome(word)) {
        printf("'%s' is a palindrome.\n", word);
    } else {
        printf("'%s' is NOT a palindrome.\n", word);
    }

    return 0;
}
