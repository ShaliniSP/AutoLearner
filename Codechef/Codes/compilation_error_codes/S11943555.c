
    #include<stdio.h>
    using namespace std;
    
    int main() {
    int a,b[a],o=0,e=0;
    cin>>a;
    	for(int i=1;i<=a;i++)
    		{
    			cin>>b[i];
    			if(b[i]%2==0)
    				e++;
    			else
    				o++;
    		}
    	if(o>e)
    		cout<<"NOT READY";
    	else
    		cout<<"READY";
    	

