/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void hollow_rhombus(int n) {
    for (int i = 1; i <= n; i++) {
        for (int sp = 1; sp <= n - i; sp++) {
            printf("  ");
        }
        for (int st = 1; st <= n; st++) {
            if (i == 1 || i == n || st == 1 || st == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    hollow_rhombus(6);
    return 0;
}


