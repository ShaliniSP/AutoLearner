
    #include <stdio.h>
    #include <math.h>
    
    int main(void) {
    	int n,i,cnta,cntb;
    	scanf("%d",&n);
    	int a[n];
    	cnta=0;
    	cntb=0;
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&a[i]);
    	    if(a[i]%2==0)
    	    cntb++;
    	    else
    	    cnta++;
    	}
    	if(cntb>cnta)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    }
    

