
    #include<stdio.h>
    #include<stdlib.h>
    int main(void)
    {
    int n,*a,i,count=0;
    scanf("%d",&n);
    a=malloc(sizeof(int)*n);
    if((n>=1)&&(n<=100))
    {
    	for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    	while((a[i]>=1)&&(a[i]<=100))
    	{
    		if(a[i]%2==0)
    		{
    			count=count+1;
    		}
    		else
    		{
    			count=count-1;
    		}
    	}
    	if(count>=0)
    	{
    		printf("READY FOR BATTLE");
    	}
    	else
    	{
    		printf("NOT READY");
    	}
    }
    return 0;
    }

