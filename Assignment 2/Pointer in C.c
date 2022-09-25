
//https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true

#include <stdio.h>

void update(int *a,int *b) {
    int *p,*q;
    *p=*a+*b;
    *q=abs(*a-*b);
    *a=*p;
    *b=*q;   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
