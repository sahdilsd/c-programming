/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int temp=50;
    if(temp<0)
    {
    printf("freezing weather");
    }
    else if(temp>0&&temp<10)
    {
        printf("very cold weather");
    }
    else if(temp>10&&temp<=20)
    {
    printf("cold weather");
    }
    else if(temp>20&&temp<=30)
    {
        printf("normal weather");
    }
    else if(temp>30&&temp<=40)
    {
        printf("hot weather");
    }
    else
    {
    printf("very hot weather");
    }
    return 0;
}
