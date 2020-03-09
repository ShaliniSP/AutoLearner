
    #include <stdio.h>
    
    int main() {
    	int c,b,i,oc=0,ec=0;
    	scanf("%d\n",&b);
    	for(i=0;i<b;i++)
    	{
    	 scanf("%d ",&c);
    	 if((c%2)==0)
    	 ec++;
    	 else
    	 oc++;
    	}
    	if(ec>oc)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY FOR BATTLE");
    	return 0;
    }

