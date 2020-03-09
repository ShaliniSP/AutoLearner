
    #include<stdio.h>
    int main()
    {
        int ns,w[100],i,e=0,o=0;
        scanf("%d",&ns);
        for(i=1;i<=ns;i++)
        {
            scanf("%d",&w[i]);
            if(w[i]%2==0)
            {
                e=e+1;
            }
            else
            {
                o=o+1;
            }
        }
        if(e>o)
        {
            printf("READY FOR BATTLE\n");
        }
        else
        {
            printf("NOT READY\n");
        }
        return 0;
    }
    

