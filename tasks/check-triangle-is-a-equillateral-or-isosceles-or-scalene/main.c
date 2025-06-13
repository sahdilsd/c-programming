/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int side1=12;
    int side2=13;
    int side3=14;
    if(side1==side2&&side2==side3)
    {
    printf("the triangle is equillateral");
    }
    else if(side1==side2&&side3!=side2&&side3!=side1)
    {
        printf("the triangle is isosceles");
    }
    else
    {
        printf("the triangle is scalene");
    }
    return 0;
}
