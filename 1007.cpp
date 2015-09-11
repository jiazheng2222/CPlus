
    #include<iostream>
    #include<cstdio>
    #include<cstdlib>

    using namespace std;

    struct DNA{
        int num;
        char data[60];
    };

    int cmp(const DNA*a, const DNA*b)
    {
        return (a->num - b->num);
    }

    int main()
    {
    	//freopen("input.txt","r",stdin);
        DNA dna[120];
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            cin>>dna[i].data;
            dna[i].num=0;
        }

        for(int i=0;i<m;i++)
        {
            dna[i].num=0;
            for(int j=0;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(dna[i].data[j]>dna[i].data[k])
                        dna[i].num++;
                }
            }
        }

        qsort(dna,m,sizeof(DNA),(int(*)(const void*,const void*))cmp);

        for(int i=0;i<m;i++)
            cout<<dna[i].data<<endl;

        return 0;

    }
