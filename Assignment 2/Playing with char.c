
//https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c,s[100],sen[200];
    scanf("%c",&c);
    scanf("%s",s);
    scanf("\n") ;
    scanf("%[^\n]%*c",sen);
    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s",sen);
    
    return 0;
}
