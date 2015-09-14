// List all the case of C(6,3)

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;
const int SELECT = 4;
int cnt;
const int NUM = 10;

void enumeration(int* data, int* lists, int remainNum,int start,const int NUM)
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
            enumeration(data,lists,remainNum-1,i+1,NUM);
    }
}

int main()
{
    cnt=0;

    int data[]={1,2,3,4,5,6,7,8,9,10};
    int lists[NUM]={0};

    enumeration(data,lists,SELECT,0,NUM);

    return 0;

}
