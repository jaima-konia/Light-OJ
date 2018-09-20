#include<stdio.h>
int main()
{
    long long t,i,reverse,temp,n;
    scanf("%lld",&t);
    for(i=1;i<=t;++i)
    {
        reverse=0;
        scanf("%lld",&n);
        temp=n;
        while(temp!=0)
        {
            reverse=reverse*10;
            reverse=reverse+temp%10;
            temp=temp/10;
        }
        if(n==reverse)
            printf("Case %lld: Yes\n",i);

        else
            printf("Case %lld: No\n",i);
    }


}
