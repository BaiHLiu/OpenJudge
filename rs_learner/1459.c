#include<stdio.h>
int main()
{
    int s[10001],i,n,a,b;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a);
        s[i]=a;
    }
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0;i<=n-1;i++)
        {
            if(s[i]==a)
            {
                 printf("%d\n",i+1);
                 break;
            }
            else
                continue;
        }
        if(i==n)
            printf("NOT FOUND\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1459
	User: 201801020908
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

