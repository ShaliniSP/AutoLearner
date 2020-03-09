
    #include<stdio.h>
    int main()
    {
    	int n,a[50],c=0,d=0,i;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		{
    		c++;
    		}
    		else
    		{ 
    		d++;
    		}
    	}
    	if(c>d)
    	{
    		printf("READY ");
    	}
    	else
    	{
    		printf("NOT READY");
    	}
    }
    		
    		 
     

