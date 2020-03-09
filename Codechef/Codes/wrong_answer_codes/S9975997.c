
    #include<stdio.h>
    int main()
    {
    	int n,even=0,odd=0,a[105],i;
    	scanf("%d",&n);
    	while(n--)
    	{
    		scanf("%d",&a[i]);
    		i++;
    	}
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		   even++;
    		else
    		   odd++;
         }
         if(even > odd)
             printf("READY FOR BATTLE");
         else
             printf("NOT READY");
             
             
             return 0;
    	 }          
    		   
    		   
    		
    		
    

