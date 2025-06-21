/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int rows=4;
    for (int i=rows;i>=1;i--){
        
    for (int j=1;j<=rows-i;j++){
             printf(" ");
        
    }
         for (int k=1;k<=i;k++){
             printf(" %d",i);
         }
          printf("\n");
    }
    
}