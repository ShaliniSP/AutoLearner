
    #include<stdio.h>
    int main()
    {
    	int n,a[100],n1=0,n2=0,i;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i])
    		if(a[i]%2==0)
    		n1++;
    		else
    		n2++;
    	}
    	if(n1>n2)
    	printf("\nREADY FOR BATTLE");
    	else
    	printf("\nNOT READY");
    	return 0;
    }

