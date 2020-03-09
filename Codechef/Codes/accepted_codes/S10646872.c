
    #include<stdio.h>
    int a[104];
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	int i,j,count=0,count2=0;
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    			count++;
    		else
    			count2++;
    	}
    	if(count>count2)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }
    

