
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int N,i,odd=0,even=0,arr[100];
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<N;i++)
        if(arr[i]%2==0)
            even++;
        else
            odd++;
        if(even>odd)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }
    

