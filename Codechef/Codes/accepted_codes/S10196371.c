
    #include<stdio.h>
    int main()
    {
        char r[]="READY FOR BATTLE", nr[]="NOT READY";
        int n,w[100],i,se=0,so=0;
        scanf("%d",&n);
        if(n>=1 && n<=100)
        {
        for(i=0;i<n;i++)
            scanf("%d",&w[i]);
        for(i=0;i<n;i++)
        {
            if(w[i]>=1 && w[i]<=100)
            {
                if(w[i]%2==0)
                    se++;
                else
                    so++;
            }
        }
        if(se<=so)
            printf("%s",nr);
        else
            printf("%s",r);
        }
        else
            exit(0);
        return 0;
    }
    

