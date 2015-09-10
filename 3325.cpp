#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    while (cin>>n && n)
    {
        int min_x,max_x,x,sum;
        cin>>x;
        min_x = x,max_x = x,sum=x;
        for(int i=0;i<n-1;i++)
        {
            cin>>x;
            sum+=x;
            if(x<min_x)
                min_x = x;
            if(x>max_x)
                max_x = x;
        }
        sum -= min_x;
        sum -= max_x;
        cout<<sum/(n-2)<<endl;
    }


    return 0;
}
