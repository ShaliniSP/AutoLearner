
    #include<stdio.h>
    int main() 
    {
    	int tc,a,b=0,i;
    	scanf("%d",&tc);
    	while(tc--) 
    	{
    		scanf("%d",&a);
    		if(a%2!=0)
    		b++;
    	}
    	if(b==0)
    	{printf("\nREADY FOR BATTLE");} 
    	else
    	printf("NOT READY");
    	return 0;
    }
    		
    		

