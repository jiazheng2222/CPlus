// List all the case of C(6,3)

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

const int NUM = 10;
const int SELECT = 4;
int cnt;
int data[NUM]={1,2,3,4,5,6,7,8,9,10};
int lists[NUM]={0};

void enumeration(int remainNum,int start)
{
    for(int i=start;i<NUM;i++)
    {
        lists[SELECT-remainNum]=data[i];
        if((remainNum-1)==0)
        {
            cnt++;
            printf("%d: ",cnt);
            for(int j=0;j<SELECT;j++)
                printf("%d ",lists[j]);
            printf("\n");
        }
        else
            enumeration(remainNum-1,i+1);
    }
}

int main()
{
    cnt=0;
    enumeration(SELECT,0);

    return 0;

}
