
    #include<stdio.h>
    
    int main()
    {
        int n,e=0,o=0,a,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a%2==0)
                e++;
            else o++;
        }
        if(e>o)
             printf("READY FOR BATTLE\n");
        else printf("NOT READY");
        return 0;
    }
    

