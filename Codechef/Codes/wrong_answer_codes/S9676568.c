
    #include<stdio.h>
    
    int main()
    {
        int t,n,k,e=0,o=0;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&n);
            if((n%2)==0)
                e++;
            else if((n%2)!=0)
                o++;
            else
                k++;
        }
        if(e>o)
                    printf("Ready for battle");
               else
                    printf("Not ready");
        return 0;
    
    }
    

