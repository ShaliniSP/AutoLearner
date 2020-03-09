
    #include<stdio.h>
    int main()
    {
    	int N, a[20],e=0,o=0,i;
    	scanf("%d",&N);
    	
    	for(i=0;i<N;i++)
    	{
    	scanf("%d",&a[i]);
    
    
    	if(a[i]%2==0)
    	
    		e++;
    	
    	else
    	o++;
    }
    
    
    if(e>o)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }

