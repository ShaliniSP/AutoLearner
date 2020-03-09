
    #include <stdio.h>
    #include <stdlib.h>
    
    int main() {
    	int troops,*num,even_c,odd_c,i;
    	
    	scanf("%d",&troops);
    	num = (int*)malloc(troops*sizeof(int));
    	
    	for(i=0;i<troops;i++)
    		scanf("%d",&num[i]);
    	
    	for(i=0;i<troops;i++){
    		if(num[i]%2==0) even_c++;
    			else odd_c++;
    	}
    	if(even_c>odd_c) printf("READY FOR BATLLE");
    	else printf("NOT READY");
    
    	return 0;
    }

