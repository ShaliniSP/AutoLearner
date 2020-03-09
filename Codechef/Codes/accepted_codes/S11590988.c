
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int N,i,even=0,odd=0;
        scanf("%d",&N);
        int A[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
            if(A[i]%2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even>odd)
        {
            printf("READY FOR BATTLE\n");
        }
        else
        {
            printf("NOT READY\n");
        }
        return 0;
    }
    

