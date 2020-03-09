
    #include <stdio.h>
     
    int main(void) {
    	// your code goes here
    	int n=0,m=0,t,k,s=0,a;
    	scanf("%d",&t);
    	for(k=0;k<t;k++)
    	{
    	scanf("%d",&a);
    	if(a%2 == 0)
    	n++;
    	else
    	m++;
    	}
    	if(n>m)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }

