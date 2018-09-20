#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double a,b,c,d,e,s,ans;
    scanf("%d",&t);
    for(i=1;i<=t;++i)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        e=(a+c)/(a-c);

        s=(a+b+c+d)/2;
        ans=sqrt((s-c)*(s-a)*(s-c-b)*(s-c-d));
        ans=e*ans;
        if(ans<0)
        {
           ans=fabs(ans);
        }

        printf("Case %d: %lf\n",i,ans);
    }
    return 0;
}
