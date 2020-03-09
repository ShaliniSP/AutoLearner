
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    int main()
    {
    
    	int count=0,cou=0,t,n;
    	scanf("%d",&t);
    	while(t--)
    	{
    	scanf("%d",&n);
    	if(n%2==0)
    		{count++;}
    	else
    		{cou++;}
    	}
    	if(count>cou)
    	{
    		printf("READY FOR BATTLE");
    	}
    	else
    	{
    		printf("NOT READY");
    	}
    	return 0;
    }

