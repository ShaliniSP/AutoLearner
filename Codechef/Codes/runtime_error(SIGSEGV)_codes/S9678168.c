
    #include<stdio.h>
    int main()
    {	int m, i, count=0, flag=0, a[100];
    	scanf("%d", &m);
    	for(i=0;i<m;i++)
    	{	scanf("%d",a[i]);
    	}
    	for(i=0;i<m;i++)
    	{	if(a[i]%2==0)
    		{count++;}
    		else
    		{flag++;}
    	}
    	if(count>flag)
    	printf("\nREADY FOR BATTLE");
    	else
    	printf("\n NOT READY");
    	return 0;
    }  

