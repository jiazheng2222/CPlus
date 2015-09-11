
    #include<iostream>
    #include<cstdio>

    using namespace std;

    int main()
    {
    	int n=1;
    	int p,e,i,d;

    	//freopen("input.txt","r",stdin);
    	while(1)
    	{
    		cin>>p>>e>>i>>d;
    		if(p >=0)
    		{
    			if(p==e && p==i)
    				cout<<"Case "<<n<<": the next triple peak occurs in "<<21252-d<<" days."<<endl;
    			else


    			{
    		int temp=i;

    		for(; ;temp+=33)
    		{
    			if((temp-p)%23==0 && (temp-e)%28==0)
    			{
    				temp-=d;
    				break;
    			}
    		}
    		if(temp<=0)
    			temp+=21252;
    		cout<<"Case "<<n<<": the next triple peak occurs in "<<temp<<" days."<<endl;
    			}



    		n++;

    		}
    		else
    			break;
    	}

    }

