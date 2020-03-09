
    #include <stdio.h>
    int main()
    {
            int N;
            scanf("%d", &N);
            int A[N];
            int lucky=0, unlucky=0;
            int i;
            for(i=0; i<N; i++) {
                    scanf("%d", &A[i]);
                    if(A[i] % 2 == 0)
                            lucky++;
                    else
                            unlucky++;
            }
            if(lucky > unlucky)
                    printf("READY FOR BATTLE\n");
            else
                    printf("NOT READY\n");
            return 0;
    }

