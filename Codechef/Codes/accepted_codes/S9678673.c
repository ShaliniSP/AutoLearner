
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
    int n,lucky=0,unlucky=0,i;
    int w[110];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&w[i]);
    }
    for(i=0;i<n;i++){
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
    	printf("READY FOR BATTLE");
    }
    else
    {
    	printf("NOT READY");
    }
    return 0;
    }

