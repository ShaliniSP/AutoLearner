
    #include<iostream>
    using namespace std;
    int main(){
    	int t,n,c;
    	cin>>t;
    	whie(t--){
    		cin>>n;
    		c=0;
    		int a[n];
    		for(i=0;i<n;i++){
    			cin>>a[i];
    			if(a[i]&1==0)
    				c++;
    		}
    		if(c>n)
    			cout<<"READY FOR BATTLE";
    		else
    			cout<<"NOT READY";	
    	}
    	return 0;
    }

