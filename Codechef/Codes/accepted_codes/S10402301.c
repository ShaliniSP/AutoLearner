
    #include<stdio.h>
    
    int main()
    {
        int N,i,lucky=0,unlucky=0;
        scanf("%d", &N);
        int a;
        for(i=1;i<=N;i++)
        {
            scanf("%d", &a);
            if(a%2==0)
                lucky++;
            else unlucky++;
        }
    
        if(lucky > unlucky)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    
        return 0;
    }
    

