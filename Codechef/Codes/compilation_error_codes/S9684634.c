
    #include<stdio.h>
    #include<conio.h>
    void main()
    {
    	int i;
    	int a[50];
    	for(i=0;i<5;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i,5;i++)
    	{
    		if(a[i]==42)
    		{
    			break;
    		}
    		else
    		{
    			printf("%d\n",a[i]);
    		}
    	}
    	getch();
    }

