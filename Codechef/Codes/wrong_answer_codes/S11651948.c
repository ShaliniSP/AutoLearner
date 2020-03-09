
    #include<stdio.h>
    int main(void){
    	int n,i,l=0,f=0,a[100000];
    	scanf("\n%d",&n);
    	for(i=0;i<n;i++)
    	{
    	scanf("\n%d",&a[i]);
    	if(a[1]!=0&&(a[i]%2)==0)
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
    

