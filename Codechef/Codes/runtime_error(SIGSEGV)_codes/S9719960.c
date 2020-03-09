
    #include<stdio.h>
    int main()
    {
        int N,A[100],a=0,b=0,i;
        scanf("%d",&N);
        for(i=0;i<N;i++);
        {
            scanf("%d",&A[i]);
            if(A[i]%2==0)
                a++;
            else
                b++;
        }
        if(a>b)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
    
    }
    

