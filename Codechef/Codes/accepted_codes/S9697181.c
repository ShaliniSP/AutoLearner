
    #include<stdio.h>
    int main()
    {
    	int a[100],n,even=0,odd=0,i;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    			even++;
    		else 
    			odd++;
    	}
    	if(even>odd)
    		printf("\n READY FOR BATTLE");
    	else
    		printf(" \n NOT READY");
    	return 0;
    }
    

