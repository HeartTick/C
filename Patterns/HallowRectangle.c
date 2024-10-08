/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void Hallow_Pattern(int tot_row, int tot_col) {
    for (int i = 1; i <= tot_row; i++) {
        for (int j = 1; j <= tot_col; j++) {
            if (i == 1 || i == tot_row || j == 1 || j == tot_col) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    Hallow_Pattern(4, 5);
    return 0;
}


