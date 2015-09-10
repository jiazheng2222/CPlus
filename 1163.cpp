#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int data[120][120];
    int calc[120][120]={0};
    int n;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>data[i][j];
        }
    }

    calc[1][1]=data[1][1];
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(calc[i-1][j-1] > calc[i-1][j])
                calc[i][j]=data[i][j]+calc[i-1][j-1];
            else
                calc[i][j]=data[i][j]+calc[i-1][j];
        }
    }

    int result=calc[n][1];
    for(int i=2;i<=n;i++)
        if(calc[n][i] > result)
            result = calc[n][i];

    cout<<result;

    return 0;
}
