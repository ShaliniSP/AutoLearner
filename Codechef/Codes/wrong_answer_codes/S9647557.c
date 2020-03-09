
    #include<stdio.h>
    #include<stdlib.h>
    int main(void)
    {
    int n,*a,i,odd=0,even=0;
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
    			even+=1;
    		}		
    		else
    		{
    			odd+=1;
    		}
    	}
    	if(even>odd)
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

