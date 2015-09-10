#include <iostream>

using namespace std;

int prime[10000];

int main()
{
    prime[1]=2;
    prime[2]=3;
    prime[3]=5;
    int loc = 4;

    for(int num=6; num<=100000; num++)
    {
        bool result = true;
        for(int i=1;i<loc;i++)
        {
            if(num%prime[i] == 0)
            {
                result = false;
                break;
            }
        }
        if(result)
            prime[loc++] = num;
    }

    for (int i=1;i<loc;i++)
        cout<<prime[i]<<endl;

    return 0;
}
