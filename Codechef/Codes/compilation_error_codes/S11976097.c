
    #include <iostream>
    #include <algorithm>
    using namespace std;
    
    int main() {
    	    int n;
    	    cin>>n;
    	    int a[n];
    	    int l=0,u=0;
    	    for(int i=0;i<n;i++){
    	        cin>>a[i];
    	        if(a[i]%2==0)l++;
    	        else u++;
    	    }
    	    if(l>u)cout<<"READY FOR BATTLE";
    	    else cout<<"NOT READY";
    
    	
    	return 0;
    }
    

