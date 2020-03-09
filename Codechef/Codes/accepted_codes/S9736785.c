
    #include<stdio.h>
    int main()
    {
        int N;
        scanf("%d",&N);
        int A[N],i,odd=0,even=0;
        for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
            if (A[i]%2==0) even++;
            else odd++;
        }
        if (even>odd) printf("READY FOR BATTLE");
        else printf("NOT READY");
        return 0;
    }
    

