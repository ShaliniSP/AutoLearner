
    #include<stdio.h>
    int main()
    {
    	int n,w[100],i,e=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	scanf("%d",&w[i]);
    	for(i=0;i<n;i++)
    	{
    		if(w[i]%2==0)
    		e++;
    		else
    		e--;
    	}
    	if(e>0)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    }

