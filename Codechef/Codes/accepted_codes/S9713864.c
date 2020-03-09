
    #include<stdio.h>
    int main()
    {
        int N,i,s,odd=0,even=0;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&s);
            if(s%2==0)
                even++;
            else
                odd++;
        }
        if(even>odd)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        return 0;
    }
    

