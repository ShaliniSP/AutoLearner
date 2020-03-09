
    #include <stdio.h>
    #include <stdlib.h>
    
    
    /* run this program using the console pauser or add your own getch, system("pause") or input loop */
    
    int main() 
    {
    	int n, w[100], j, count=0;
    	scanf("%d", &n);
    	for (j=0; j<n; j++)
    	{
    		scanf("%d", &w[j]);
    		if(w[j]%2==0)
    		count++;
    		else 
    		count--;
    	}
    	if(count>0)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    
    	return 0;
    }

