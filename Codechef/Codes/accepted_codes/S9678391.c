
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
        int N,i,j=0;
        int even=0,odd=0;
        int A[1000];
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
        }
        while(j<N)
        {
            if(A[j]%2==0)
                even++;
            else
                odd++;
            j++;
        }
        if(even>odd)
        {
            printf("READY FOR BATTLE");
        }
        else
        {
            printf("NOT READY");
        }
        return 0;
    }
    

