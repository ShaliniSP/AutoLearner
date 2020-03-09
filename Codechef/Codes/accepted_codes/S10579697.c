
    #include<stdio.h>
    int main()
    {
    	int n,i,ce=0,co=0,num;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&num);
    		(!(num%2))?++ce:++co;
    	}
    	if(ce>co)
    	  printf("READY FOR BATTLE\n");
    	else
    	  printf("NOT READY\n");
    	return 0;
    }

