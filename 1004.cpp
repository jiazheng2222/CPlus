#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    double input, average=0;

    for (int i=0;i<12;i++)
    {
        cin>>input;
        average += input;
    }

    cout<<"$"<<average/12;


    return 0;
}
