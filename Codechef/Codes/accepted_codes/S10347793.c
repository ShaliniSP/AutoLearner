
    #include<stdio.h>
    int main(void)
    {   int t,x,i,l=0,count=0;
    	scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{scanf("%d",&x);
    	if(x%2==0)
    	count++;
    	else
    	l++;
    	}
    	if(count>l)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }

