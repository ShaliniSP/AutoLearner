
    #include<stdio.h>
    int main()
    {
    	int n,a[101],t,i,lucky=0,unlucky=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&t);
    		a[i]=t;
    	}
    	for(i=0;i<n;i++)
    	{
    		if((a[i]%2)==0)
    		{
    			lucky+=1;
    		}
    		else{
    			unlucky+=1;
    		}
    	}
    	if(lucky>unlucky)
    	{
    		printf("READY FOR BATTLE");	
    	}
    	else{
    		printf("NOT READY");
    	}
    	return 0;
    }

