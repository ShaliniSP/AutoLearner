
    #include<stdio.h>
    int main()
    {
        int n,i,luck=0,s;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&s);
            if(s%2==0) luck++;
            else luck--;
        }
        if(luck>0) printf("READY FOR BATTLE");
        else printf("NOT READY");
        return 0;
    }
    

