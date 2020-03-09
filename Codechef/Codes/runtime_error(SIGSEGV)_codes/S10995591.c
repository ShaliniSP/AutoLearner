
    #include<stdio.h>
    int main()
    {
    int N,i,count=0,count1=0,a;
    	scanf("%d",&N);
    	for(i=1;i<=N;i++)
    	{
    		scanf("%d\n",a);
    		if(a%2==0)
    		{
    		count++;
    		}
    		else
    		{
    		count1++;
    		}
    	}
    	if(count>count1)
    	{
    	printf("READY FOR BATTLE");
    	}
    	else
    	{
    	printf("NOT READY");
    	}
    	return 0;
    }
    

