
    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<cstdio>
    using namespace std;
    int main()
    {
    	int n,a,count_e=0,count_o=0;
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
    		cin>>a;
    		if(a%2==0)
    		count_e++;
    		else
    		count_o++;
    	}
    	if(count_e-count_o>0)
    	cout<<"READY FOR BATTLE";
    	else
    	cout<<"NOT READY";
    }
    
    

