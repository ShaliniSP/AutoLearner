
    #include<stdio.h>
    int main(void)
    {
    	int i, a[100],l=0,u=0,n;
    	scanf("%d\n",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0) l++;
    		else u++;
    	}
    	if(l>u)
    	printf("\nREADY FOR BATTLE");
    	else printf("NOT READY");
    return 0;
    } 

