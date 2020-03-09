
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
    	int t;
    	int u=0;
    	scanf("%d",&t);
    	int *list=(int)malloc(sizeof(int)*t);
    	int e=0,o=0;
    	while(u<t)
    	{
    		scanf("%d",&list[u]);
    		if(list[u]%2==0)
    			e+=1;
    		else
    			o+=1;
    		u+=1;
    	}
    	if(e>o)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY\n");
    	free(list);
    	return 0;
    }

