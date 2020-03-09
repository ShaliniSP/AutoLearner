
    #include<stdio.h>
     
    int main()
    {
    	int t,i,count_even=0,count_odd=0;
    	scanf("%d",&t);	
    	int weapons[t];
    	for(i=1;i<=t;i++)
     	{
    		scanf("%d",&weapons[i]);		
    		if(a[i]%2==0)
    			count_even++;
    		else
    			count_odd++;
    	
     	}
    	if(count_even > count_odd)
    		printf("READY FOR BATTLE");
    	else
    		printf("NOT READY");
    	return 0;
    }
    

