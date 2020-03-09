
    #include <iostream>
    using namespace std;
    
    int main() {
    	int n,i,ready=0,no=0;
    	cin>>n;
    	int a[n];
    	for(i=0;i<n;i++)
    	{
    		cin>>a[i];
    		if(a[i]%2==0)
    		ready++;
    		else
    		no++;
    		
    	}
    	
    	
    	if(ready>no)
    	cout<<"READY FOR BATTLE"<<endl;
    	else
    	cout<<"NOT READY"<<endl;
    	return 0;
    
    }

