#include <iostream>

using namespace std;

int m=0, n=1, t;

void gcd(int a, int b)
{
    if (a%b == 0)
        t = b;
    else{
        gcd(b, a%b);

        int p = n;
        int q = m - n * (a/b);
        m = p, n = q;
    }
}

int main()
{
    gcd(66,35);

    cout<<t<<" "<<m<<" "<<n<<endl;
    return 0;
}
