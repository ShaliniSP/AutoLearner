
    #include<stdio.h>
    int main()
    {
    	int n,a,i=0,count=0,count2 =0 ;
    	scanf("%d",&n);
    	for(i = 0;i < n;i++)
    	{
    		scanf("%d",&a);
    		if(a%2 == 0)
    		count++;
    		else
    		count2++;
    	}
    	if(count > count2)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    return 0;
    }

