
    #include<stdio.h>
    
    int main()
    {
    int n,s,l,ul;
    l=ul=0;
    scanf("%d",&n);
    
    while(--n)
    {
    scanf("%d ",&s);
    
    if(s%2==0)
    	l++;
    else 
    	ul++;
    }
    
    if(l>ul)
    	printf("READY FOR BATTLE");
    else
    	printf("NOT READY");
    
    return 0; 
    
    }

