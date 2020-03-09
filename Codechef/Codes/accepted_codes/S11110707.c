
    #include<stdio.h>
    int main()
    {
    	int n,i,lucky=0,unlucky=0,hid;
    	scanf("%d\n",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&hid);
    		if(hid%2==0)
    		{
    			lucky++;
    		}
    		else
    		{
    			unlucky++;
    		}
    	}
    	(lucky>unlucky)?printf("READY FOR BATTLE"):printf("NOT READY");
    	return 0;
    }

