#include <iostream>
#include <cstdio>

using namespace std;

double pi = 3.141592653589793;

int main()
{
    int n;
    cin>>n;
    for (int i=1; i<=n ;i++)
    {
        double x,y;
        cin>>x>>y;
        double result = pi*(x*x + y*y)/100;
        int result_int = (int)result;
        int years;
        if(result - result_int > 0.00000001)
            years = result_int + 1;
        else
            years = result;

        printf("Property %d: This property will begin eroding in year %d.\n",i,years);
    }

    printf("END OF OUTPUT.");

    return 0;
}
