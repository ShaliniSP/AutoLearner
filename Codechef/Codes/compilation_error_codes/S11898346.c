
    #include<iostream>
    using namespace std;
    int main()
    {
    	int s,i,y,n;
    	y=0;
    	n=0;
    	cin>>s;
    	int a[s];
    	for(i=0;i<s;i++)
    	{
    		cin>>a[i];
    	}
    	for(i=0;i<s;i++)
    	{
    		if(a[i]%2==0)
    		{
    			y++;
    		}
    		else{
    			n++;
    		}
    	}
    	if(y>n)
    	{
    		cout<<"READY FOR BATTLE";
    	}
    	else{
    		cout<<"NOT READY";
    	}
    	
    	return 0;
    	
    }

