
    #include <stdio.h>
    
    int main() 
    {
    	int i,n,count1=0,count2=0,b;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&b);
    	    if(b%2==0)
    	    {
    	        count1++;
    	    }
    	    else
    	    {
    	        count2++;
    	    }
    	 }
    	 if (count1>count2)
    	 {
    	     printf("READY FOR BATTLE");
    	 }
    	 else
    	 {
    	     printf("NOT READY");
    	 }
    	 
    	return 0;
    }

