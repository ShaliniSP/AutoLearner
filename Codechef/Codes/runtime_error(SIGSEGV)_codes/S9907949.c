
    #include<stdio.h>
    int main()
    {
    	int st[10],i,j,n,e=0,o=0;
    	printf("enter the value of n \n");
    	scanf("%d",&n);
    	printf("the value of str \n");
    	for(i=0;i<n;i++)
    	scanf("%d",st[i]);
    	for(i=0;i<n;i++)
    	{
    		if(st[i]/2==0)
    		{
    			e++;
    		}
    		else
    		{
    			o++;
    		}
    	}
    	if(e>o)
    	printf("solider are  ready for battle \n");
    	else
    	printf("solider are not ready for battle \n ");
    	return 0;
    }
    

