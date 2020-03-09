
    ﻿#include<stdio.h>
    int main()
    {
        int N,A[100],i,b=0;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
        }
        for(i=0;i<N;i++)
        {
            b=b+A[i]%2;
        }
        if(b>=(N/2))
            printf("NOT READY");
        else
            printf("READY FOR BATTLE");
        return 0;
    }
    

