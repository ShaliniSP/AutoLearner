
    #include <stdio.h>
    
    int main(void) {
        int n,i,e=0;
    	scanf("%d",&n);
    	int a[n];
    	for(i=0;i<n;i++)
    	{
    	    scanf("%d",&a[i]);
    	    if(a[i]!=1 && a[i]%2==0) e++;
    	    else e--;
    	}
    	if(e>0) printf("READY FOR BATTLE");
    	else printf("NOT READY");
    	return 0;
    }
    
    

