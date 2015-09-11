#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int x,y,z,n;
    int m=1;
    while(cin>>x>>y>>z>>n && !(x==-1 && y==-1 && z==-1 &&n==-1))
    {
        int i;
        for(;;i++)
        {
            if(!((i-x)%23) && !((i-y)%28) && !((i-z)%33))
            {
                i=i-n;
                if(i<=0)
                    i+=21252;
                printf("Case %d: the next triple peak occurs in %d days.\n",m,i);
                break;
            }
        }
        m++;
    }


    return 0;
}
