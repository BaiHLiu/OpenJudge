#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int i, j, k;
    int n;
    int t;
    char ch;
    int a, b, c;
    int flag=0;

    scanf("%d", &a);
    a=abs(a);
    if (a>99) {
        a%=100;
        printf("%02d", a);
    } else {
        printf("%d", a);
    }



    return 0;
}

/**************************************************************
	Problem: 1088
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

