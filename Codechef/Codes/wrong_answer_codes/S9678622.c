
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
    int n,lucky,unlucky,i;
    int w[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&w[i]);
    	if(w[i]%2==0){
    	lucky++;
    	}
    	else
    	{
    		unlucky++;
    	}
    
    }
    if(lucky>unlucky)
    {
    	printf("READY FOR BATTLE\n");
    }
    else
    {
    	printf("NOT READY\n");
    }
    return 0;
    }

