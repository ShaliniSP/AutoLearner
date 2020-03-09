
    #include <stdio.h>
    
    int main(void) {
    	int t,count,i,num;
    	scanf("%d", &t);
    	count=0;
    	for(i=0;i<t;i++)
    	{
    		scanf("%d", &num);
    		if(num%2==0)
    		count++;
    		
    	}
    	if(count>=(t/2)+1 )
    	printf("READY FOR BATTLE \n");
    	else
    	printf("NOT READY");
    
    	return 0;
    }
    

