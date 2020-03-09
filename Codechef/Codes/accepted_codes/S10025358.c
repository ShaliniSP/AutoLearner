
    #include<stdio.h>
    int main()
    {
    	int n,even=0,odd=0,count;
    	scanf("%d",&n);
    	int soldiers[n];
    	for(count=0;count<n;count++)
    	{
    		scanf("%d",&soldiers[count]);
    		if(soldiers[count]%2==0)
    			even++;
    		else
    			odd++;
    	}
    	if(even>odd)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }
    

