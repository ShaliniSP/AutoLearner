
    #include<stdio.h>
    int main()
    {
    	int a[10000],odd,even,i,n;
    	scanf("%d\n",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    			if(a[i]%2==0)
    		even++;
    		else
    		odd++;
    		
    	}
    	
    	if(even>odd)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY FOR BATTLE");
    }

