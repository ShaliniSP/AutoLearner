
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
    
        int N;
        scanf("%d",&N);
        int arr[N];
        int i,j,counte=0,counto=0;
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]%2==0)
                counte++;
            else
                counto++;
        }
        if(counte>counto)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    return 0;
    }
    

