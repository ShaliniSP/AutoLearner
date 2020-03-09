
    #include<stdio.h>
    
    int main()
    {
        int t,n,e=0,o=0;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&n);
            if((n%2)==0)
                e++;
    
            else
                o++;
        }
        if(e>o)
                    printf("Ready for battle");
               else
                    printf("Not ready");
        return 0;
    
    }
    

