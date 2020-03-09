
    #include<stdio.h>
    int main()
    {
    int m[20],n,i,o=0,e=0;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
    
    scanf("%d",&m[i]);
    }
    for(i=1;i<=n;i++)
    {
    if(m[i]%2==0)
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

