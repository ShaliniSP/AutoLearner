
    #include <stdio.h>
     
    int main(void) {
    	int n,a[109],i,count,flag;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    	    if(a[i]%2==0)
    	    {
    	        count++;
    	    }
    	    else
    	    {
    	        flag++;
    	    }
    	}
    	if(flag>=count)
    	{
    	    printf("NOT READY");
    	}
    	else
    	{
    	    printf("READY FOR BATTLE");
    	}
    	return 0;
    }
     

