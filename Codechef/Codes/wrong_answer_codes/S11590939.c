
    #include <stdio.h>
    #include <stdlib.h>
    
    void insert(long long int j, int *B)
    {
        long int  parent,child;
        int k;
        parent = j/2;
        child = j;
        if(j!=0)
        {
            while(child!=parent)
            {
                if(B[parent]>B[child])
                {
                    k = B[parent];
                    B[parent] = B[child];
                    B[child] = k;
                    child = parent;
                    parent = child/2;
                }
                else{break;}
            }
        }
    }
    
    int main()
    {
        int T,i,A[50002];
        long long int N,j;
        scanf("%d",&T);
        for(i=0;i<T;i++)
        {
            scanf("%lld",&N);
            for(j=0;j<N;j++)
            {
                scanf("%d",&A[j]);
                insert(j,A);
            }
            printf("%lld\n",(N-1)*A[0]);
        }
        return 0;
    }
    

