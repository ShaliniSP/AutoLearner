
    #include<stdio.h>
    int main()
    {
    	int n,w[100],i,j,e=0,o=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	scanf("%d",&w[i]);
    	for(j=0;j<n;j++)
    	{
    		if(w[j]%2==0)
    		e++;
    		else
    		o++;
    	}
    	if(e>o)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY FOR BATTLE");
    }

