
    #include<stdio.h>
    int main()
    { 
    	int c,a,b,N,count=0;
    	scanf("%d",&N);
    	int weapon[N];
    	for(b=0;b<N;b++)
    	{scanf("%d",&weapon[b]);}
    	for(c=0;c<N;c++)
    		{
    			if((weapon[c])%2==0)
    			{count++;}
    		}
    
    		if(count>(N-count))
    		{printf("READY FOR BATTLE");}
    		else
    			printf("NOT READY");
    
    return(0);}
    

