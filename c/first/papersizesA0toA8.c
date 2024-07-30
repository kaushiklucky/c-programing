//calculation of paper sizes A0 to A8
//Date:13/10/2022

# include<stdio.h>
int main(){
    int a0ht, a0wd;
    int a1ht, a1wd, a2ht, a2wd, a3ht, a3wd, a4ht, a4wd, a5ht, a5wd, a6ht, a6wd, a7ht, a7wd, a8ht, a8wd;
    a0ht = 1189;
    a0wd = 841;
    printf("Size of A0 paper Ht = %d Width = %d\n", a0ht, a0wd);
    a1ht = a0wd;
    a1wd = a0ht/2;
    printf("Size of A1 paper Ht = %d width = %d\n", a1ht, a1wd);
    a2ht = a1wd;
    a2wd = a1ht/2;
    printf("Size of A2 paper Ht = %d width = %d\n", a2ht, a2wd);
    a3ht = a2wd;
    a3wd = a2ht/2;
    printf("Size of A3 paper Ht = %d width = %d\n", a3ht, a3wd);
    a4ht = a3wd;
    a4wd = a3ht/2;
    printf("Size of A4 paper Ht = %d width = %d\n", a4ht, a4wd);
    a5ht = a4wd;
    a5wd = a4ht/2;
    printf("Size of A5 paper Ht = %d width = %d\n", a5ht, a5wd);
    a6ht = a5wd;
    a6wd = a5ht/2;
    printf("Size of A6 paper Ht = %d width = %d\n", a6ht, a6wd);
    a7ht = a6wd;
    a7wd = a6ht/2;
    printf("Size of A7 paper Ht = %d width = %d\n", a7ht, a7wd);
    a8ht = a7wd;
    a8wd = a7ht/2;
    printf("Size of A8 paper Ht = %d width = %d\n", a8ht, a8wd);
    return 0;
}