
//https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    int sumi=a+b,subi=a-b;
    float sumf=c+d,subf=c-d;
    printf("%d",sumi);
    printf(" ");
    printf("%d",subi);
    printf("\n");
    printf("%0.1f",sumf);
    printf(" ");
    printf("%0.1f",subf);

    
    return 0;
}
