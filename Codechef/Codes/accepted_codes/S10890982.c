
    #include<stdio.h>
    int main()
    {
    	int t,i,count=0,flag=0;
    	scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{
    		int a[t];
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    			count ++;
    		else
    			flag++;
    	}
    	if(count>flag)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    
    }
    

