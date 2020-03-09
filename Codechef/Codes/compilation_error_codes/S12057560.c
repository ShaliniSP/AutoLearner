
    #include <iostream>
    using namespace std;
    
    int main() {
    	    int t,l=0,j=0,i;
    	    cin>>t;
    	    int *arr;
    	    arr=new int[t];
    	    for(i=0;i<t;i++)
    	    {
    	        cin>>arr[i];
    	    
    	    if(arr[i]%2==0)
    	    {
    	        l++;
    	    }
    	    if(arr[i]%2!=0)
    	    {
    	        j++;
    	    }
    	    }
    	    if(j>l)
    	    {
    	        cout<<"NOT READY"<<endl;
    	    }
    	    if(l>j)
    	    {
    	        cout<<"READY FOR BATTLE"<<endl;
    	    }
    	return 0;
    }
    

