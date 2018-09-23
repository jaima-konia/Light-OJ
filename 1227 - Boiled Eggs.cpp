#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;++i)
    {
        int n,p,q,g,nmbr=0,sum=0;
        cin >> n >> p >> q;
        for(int j=1;j<=n;++j)
        {
            cin >> g;
            sum+=g;
            if(p>nmbr && q>=sum)
                ++nmbr;
        }
        printf("Case %d: %d\n",i,nmbr);

    }
    return 0;

}
