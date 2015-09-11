#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    double data[500]={0};
    data[1]=0.5;
    for(int i=2;i<275;i++)
        data[i]=data[i-1]+(1/(double)(i+1));

    double n;
    while(cin>>n && n!=0.0)
    {
        int i;
        for(i=1;i<500 && n>data[i];i++);
        cout<<i<<" card(s)"<<endl;
    }


    return 0;
}
