
    #include<stdio.h>
    
    int main()
    {
    	int n,a,i,count=0,count1=0;
    	scanf("%d",&n);
    	
    	for(i=0;i<n;i++)
    	{
    	scanf("%d",&a);
    	
    	if(a%2==0)
    	count=count+1;
    	
    	else 
    	count1=count1+1;
    	}
      
    	if(count>count1)
    	printf("READY FOR BATTLE\n");
    	
    	else
    	printf("NOT READY\n");
    }

