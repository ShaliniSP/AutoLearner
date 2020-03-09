
    #include <stdio.h>
    int main()
    {
        int N;
        //printf("enter number of soldier=");
        scanf("%d",&N);
        if(N<1||N>100)
        {
            return 0;
        }
        int A[N];
        int i;
        int count=0;
        for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
            if(A[i]<1||A[i]>100)
            {
                return 0;
            }
            if(A[i]%2==0)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        if(count>0)
        {
            printf("READY FOR BATTLE");
        }
        else
        {
            printf("NOT READY");
        }
        return 0;
    }
    

