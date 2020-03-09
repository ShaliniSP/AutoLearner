
    #include<stdio.h>
    int main()
    {
        int t,e=0,o=0,k;
            scanf("%d",&t);
            while(t--)
            {
                scanf("%d",&k);
                if(k%2)
                    o++;
                else
                    e++;
    
            }
            if(e>o)
                printf("READY FOR BATTLE");
            else
                printf("NOT READY");
        return 0;
    }
    

