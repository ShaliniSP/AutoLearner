
    #include<stdio.h>
    #include<stdlib.h>
    int main(void)
    {
    	int t,i,lucky=0,unlucky=0;
    	int n;
    	scanf("%d",&t);
    	for(i=0;i<t;i++)
    	{
    		scanf("%d",&n);
    		if(n%2==0)
    			lucky++;
    		else 
    			unlucky++;
    	}
    	if(lucky>unlucky)
    		printf("READY FOR BATTLE");
    	else
    		printf("NOT READY");
    return 0;
    }
    

