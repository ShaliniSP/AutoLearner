
    #include<iostream>
    using namespace std;
    int main(){
    	int n,c;
    //	while(t--){
    		cin>>n;
    		c=0;
    		int a[n];
    		for(int i=0;i<n;i++){
    			cin>>a[i];
    			if(a[i] && 1==0)
    				c++;
    		}
    		if(c>n)
    			cout<<"READY FOR BATTLE\n";
    		else
    			cout<<"NOT READY\n";	
    	return 0;
    }

