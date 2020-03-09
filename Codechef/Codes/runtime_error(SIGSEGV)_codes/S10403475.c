
    #include <stdio.h>
    
    int main(void) {
    	int i,a,o=0,e=0;
    	int N[10];
    	scanf("%d",&a);
    	for(i=0;i<a;i++)
    	scanf("%d",&N[i]);
    	for(i=0;i<a;i++)
    	{
    	    if(N[i]%2==0)
    	    e++;
    	    else
    	    o++;
    	}
    	if(e>o)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }
    

