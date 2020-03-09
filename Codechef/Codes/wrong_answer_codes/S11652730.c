
    #include <stdio.h>
    int main()
    {
    	int num,i;
    	scanf("%d",&num);
    	for(i=0;i<num;i++)
    	{
    		int weapons,c1,c2;
    		c1=0;
    		c2=0;
    		scanf("%d",&weapons);
    		if(weapons!=0 && weapons%2==0)
    		{
    			c1++;
    		}
    		else
    		{
    			c2++;
    		}
    		if(c1>c2)
    		{
    			printf("READY FOR BATTLE\n");
    		}
    		else if(c1<c2)
    		{
    			printf("NOT READY FOR BATTLE\n");
    		}
    	}
    	return 0;
    }

