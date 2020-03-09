
    #include<stdio.h>
    int main()
    {
        int n,i,c=0;
        scanf("%d",&n);
        int A[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
            if(A[i]%2==0)
            {
                c++;
            }
        }
        if(c>(n-c))
        {
            printf("READY FOR BATTLE");
        }
        else
        {
            printf("NOT READY");
        }
        return 0;
    }
    

