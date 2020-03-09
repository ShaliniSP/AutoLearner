
    #include<stdio,h>
    #include<conio.h>
    void main()
    {
    int a[20],n,i,g=0,k=0  ;
    clrscr();
    printf("enter no. of soldiers");
    scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    	printf("enter no. of weapons for soldier %d ",i+1);
    	scanf("%d",&a[i]); 
    	}
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		{
    		g++;
    	
    		{
    		else
    		k++;
    	}
    	if(g>k)
    	{
    	printf("ready for battle");
    	}
    	else
    	printf("not ready for battle");
    	getch();
    	
    }

