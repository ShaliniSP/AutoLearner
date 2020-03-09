
    #include<stdio.h>
    int main()
    {
        int w,n,ew[100],ow[100];
        scanf("%d",&n);
        int e=0,o=0;
        while(n>0)
        {
            scanf("%d",&w);
            if(w%2==0)
               {
                ew[e]=w;
                e++;
               }
            else
            {
                ow[o]=w;
                o++;
            }
            n--;
    
        }
        if(e==o)
            printf("NOT READY");
        else if(o>e)
            printf("NOT READY");
        else
            printf("READY FOR BATTLE");
    return 0;
    }
    

