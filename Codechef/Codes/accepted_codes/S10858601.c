
    #include<stdio.h>
    
    int main()
    {
        int n,w,l,u;
        l=0;
        u=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&w);
            if(w%2)
                u++;
            else
                l++;
        }
        if(l>u)
            printf("READY FOR BATTLE \n");
        else
            printf("NOT READY \n");
        
        return 0;
    }
    

