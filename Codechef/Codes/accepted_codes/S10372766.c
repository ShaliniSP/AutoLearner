
    #include <stdio.h>
     
    int main(void) {
    	int n, a[101], i, se=0, so=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    	for(i=0;i<n;i++)
    	{
    	    if(a[i]%2==0)
    	    se++;
    	    else
    	    so++;
    	}
    	if(se>so)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }

