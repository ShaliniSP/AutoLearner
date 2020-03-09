
    #include<iostream>
    using namespace std;
    int main(){
    	int n,x,count;
    		cin>>n;
    		count=0;
    		for(int i=0;i<n;i++){
    			cin>>x;
    			count+= (x%2==1)?-1:1;
    		}
    		if(count>0)
    			cout<<"READY FOR BATTLE"<<endl;
    		else
    			cout<<"NOT READY"<<endl;
    	
    }

