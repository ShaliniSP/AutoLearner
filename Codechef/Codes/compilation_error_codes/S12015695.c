
    #include<stdio.h>
    #include<stdlib.h>
    #include<conio.h>
    int main()
    {
    	int n,i,m,y;
    	scanf("%d",&n);
    	int a[n],b=0,c=0;
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		m=a[i]%2;
    		if(m==0)
    		{
    		b=b+1;
    	    }
    		else
    		{
    		c=c+1;
    	    }
    	}
    	y=b-c;
    	if(y>0)
    	printf("READY FOR BATTLE\n");
    	else
    	{ 
    	printf("NOT READY\n");}
    	return 0;
    }

