
    #include<stdio.h>
    int main()
    {
    	int i,n,e=0,o=0,j;
    	int A[100];
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	scanf("%d",&A[i]);
    	for(j=0;j<n;j++)
    	{
    		if(A[j]%2==0)
    		e=e+1;
    		else
    		o=o+1;
    	}
    	if(e>o)
    	printf("\nREADY FOR BATTLE");
    	else
    	printf("\nNOT READY");
    return 0;
    }

