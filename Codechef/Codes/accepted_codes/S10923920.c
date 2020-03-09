
    #include<stdio.h>
    int main()
    {   int N,O=0,E=0;
        int A[100];
        scanf("%d",&N);
        //printf("\n");
         while(N<=100&&N>=1)
         {  scanf("%d",&A[N]);
            if(A[N]>0)
            {   if(A[N]%2==0)
                    E++;
                else
                    O++;
            }
            else
                return 0;
            N--;
         }
        // printf("%d ",E);
        // printf("%d",O);
         if(E>O)
            printf("READY FOR BATTLE");
         else
            printf("NOT READY");
    return 0;
    }
    

