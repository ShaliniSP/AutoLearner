
    #include <stdio.h>
    
    int main(void) {
    	int t ;
    	scanf("%d",t);
    	while(t--)
    	{
    		int a[100],k=0,n=0,i;
    		for(i=0;i<t;i++){
    			scanf("%d",&a[i]);
    			if (a[i]%2==0){
    				k++;
    			}
    			else n++;
    		}
    	if(k>n)	
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	}
    	return 0;
    }
    

