
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
        int N,i,weapons,even=0,odd=0;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&weapons);
            if(weapons%2==0)
                even++;
            else
                odd++;
        }
        if(even>odd)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }
    

