/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[]="shadil";
    int count=0; int consonants=0;
    printf("%s\n",str);

    for(int i=0;i<6;i++){
        char sh=str[i];
        if(sh=='a'||  sh=='e'|| sh=='i'||sh=='o'||sh=='u'){
            count++;
        }
        else {
             consonants++;
            
        }
    }
printf("vowels:%d\n",count);
printf("consonants: %d\n", consonants);
    return 0;
}
