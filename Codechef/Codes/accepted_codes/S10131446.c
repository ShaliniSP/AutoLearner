
    #include<stdio.h>
    #include<string.h>
    int main()
    {
    	int i,t,n,a=0,b=0;
    	int str[100000];
    	scanf("%d",&n);
    	
    		for(i=0;i<n;i++)
    		{
    		scanf("%d",&str[i]);
    		if(str[i]%2==0)
    		a++;
    		else
    		b++;
    		}
    		if(a>b)
    		printf("READY FOR BATTLE\n");
    		else
    		printf("NOT READY\n");
    		return 0;
    	
    }

