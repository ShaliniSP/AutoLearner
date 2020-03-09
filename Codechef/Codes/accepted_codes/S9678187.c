
    #include<stdio.h>
    int main()
    {	int a[100],i,count=0,n,flag=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{	scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	if(a[i]%2==0)
    	{flag++;}
    	else
    	{count++;}
    	if(flag>count)
    	printf("\nREADY FOR BATTLE");
    	else
    	printf("\nNOT READY");
     
    	return 0;
    }

