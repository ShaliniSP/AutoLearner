
    #include<stdio.h>
    #include<conio.h>
    int main()
    {
    	int i,n,a[100],b=0;
    	printf("Enter the no of soldiers.\n");
    	scanf("%d",&n);
    	printf("\nEnter the no of weapons for each soldier.\n");
    	for(i=0;i<=n-1;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<=n-1;i++)
    	{
    		if((a[i]%2)==0)
    		{
    			b++;
    		}
    	}
    	if(b>(n-b))
    		printf("\nREADY FOR BATTLE.");
    	else
    		printf("\nNOT READY FOR BATTLE.");
    	getch();
    	return 0;
    }

