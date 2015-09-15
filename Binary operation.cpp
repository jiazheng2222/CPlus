// List all the case of C(6,3)

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

int po[16]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768};
int aor[16]={19,39,78,140,305,626,1252,2248,4880,10016,20032,35968,12544,29184,58368,51200};

int main()
{
    freopen("input.txt","r",stdin);
    int value=0;
    char c;
    int cmin=999999;
    int cnt;
    int pos=1;
    for(int i=0;i<16;i++)
    {
        cin>>c;
        if(c=='b')
        {
            //1: Use the data
            //2: Get the data when running
            //value+=po[i];
            value+=pos;
        }
        pos=pos<<1;
    }
    cout<<value<<endl;

    for(int i=0;i<65535;i++)
    {
        cnt=0;
        int tmp = value;
        for(int j=0;j<16;j++)
        {
            if(i&po[j])
            {
                tmp = tmp^aor[j];
                cnt++;
            }
        }
        if(tmp==0 || tmp==65535)
        {
            if(cnt<cmin)
                cmin=cnt;
        }
    }
    if(cmin!=999999)
        cout<<cmin<<endl;
    else
        cout<<"Impossible"<<endl;

    return 0;

}
