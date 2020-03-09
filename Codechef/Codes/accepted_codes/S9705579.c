
    #include<stdio.h>
    int main()
    {
    	int t,i,j,l,ul,flag;
    	int num[1000];
    	scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{
    		l=0;
    		ul=0;
    		flag=0;
    		scanf("%d",&num[i]);
    		for(j=0;num[j]!='\0';j++)
    		{
    			if(num[j]%2==0)
    			l++;
    			else
    			ul++;
    		}
    		if(l>ul)
    		flag=1;
    		else
    		flag=0;
    	}
    	if(flag==1)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	
    	return 0;
    }

