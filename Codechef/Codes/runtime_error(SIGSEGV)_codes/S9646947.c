
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
    int n=0,*a,i,count=0;
    scanf("%d",&n);
    a=malloc(sizeof(int)*n);
    if((n>=1)&&(n<=100))
    {
    	for(i=0;i<n;i++)
    	scanf("%d",a[i]);
    	while((a[i]>=1)&&(a[i]<=100))
    	{
    		if(a[i]%2==0)
    		{
    			count+=1;
    		}
    		else
    		{
    			count-=1;
    		}
    	}
    	if(count>0)
    	{
    		printf("\nREADY FOR BATTLE");
    	}
    	else
    	{
    		printf("\nNOT READY");
    	}
    }
    return 0;
    }

