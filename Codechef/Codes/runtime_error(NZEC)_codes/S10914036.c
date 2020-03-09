
    #include <stdio.h>
    
    int main(void) {
    	int test,i,num,eve=0,odd=0;
    	scanf("%d",&test);
    	for(i=1;i<=test;i++)
    	{
    		scanf("%d",&num);
    		if(num%2==0)
    		eve=eve+1;
    		else
    		odd=odd+1;
    		
    	}
    	if(eve>odd)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    }
    

