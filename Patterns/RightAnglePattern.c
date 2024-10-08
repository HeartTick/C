/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    
    for(int line = 1; line <= n; line++) {
        for(int star = 1; star <= line; star++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}


