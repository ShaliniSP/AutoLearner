
    #include<stdio.h>
    int main(void){
    	int n,i,l=0,f=0,k;
    	scanf("\n%d",&n);
    	for(i=0;i<n;i++)
    	{
    	scanf("\n%d",&k);
    	if(k!=0&&(k%2)==0)
    	{
    		l++;
    	} 
    	else{
    		f++;
    	}
        }
        if(l>f)
        {
        	printf("READY FOR BATTLE");
        }
        else{
        	printf("NOT READY");
        }
        return 0;
    }
    

