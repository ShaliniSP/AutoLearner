
    #include <stdio.h>
    
    int main(void) {
    	int n,m,e,o;
    	int a[100];
    	e=0;o=0;
    	scanf("%d",&n);
    	for(m=0;m<n;m++)
    	{
    		scanf("%d",&a[m]);
    		if(a[m]%2==0)
    			e++;
    		else
    			o++;
    	}
    	if(e>o)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	return 0;
    }
    

