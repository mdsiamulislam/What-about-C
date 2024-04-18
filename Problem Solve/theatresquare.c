#include<stdio.h>
int main()
{
        long long int m,n,a,i,j;

        scanf("%I64d%I64d%I64d",&n,&m,&a);

        if(m%a==0)
        {
            i=m/a;
        }
        else
        {
            i=(m/a)+1;
        }

        if(n%a==0)
        {
            j=n/a;
        }
        else
        {
            j=(n/a)+1;
        }

        printf("%I64d",i*j);
        return 0;
}
