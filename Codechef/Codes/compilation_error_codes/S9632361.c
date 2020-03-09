
    #include<stdio.h>
    #include<math.h>
    int main()
    {
        int i,N,e,o,army[100];
        printf("give the number of soldiers:-")
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&army[i]);
        }
        for(i=0;i<N;i++)
            {
                if((army[i]%2)==0)
                      e++;
                else
                    o++;
            }
        if(e>o)
                printf("READY FOR BATTLE\n");
            else
                printf("NOT READY\n");
        return 0;
    }

