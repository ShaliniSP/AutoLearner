
    #include <stdio.h>
     
    int main(void) {
    	int c=0,i=0,d,n,weapon[10];
    	scanf("%d/n",&n);
    	d=n;
    	while(i<n)
    	{
    		scanf("%d",&weapon[i]);
    		if((weapon[i]%2)==1)
    		c=c+1;
    		i++;
    		
     
    	}
    	if(c>d/2)
    	printf("NOT READY");
    	else
    	printf("READY FOR BATTLE");
     
     
    	// your code goes here
    	return 0;
    }

