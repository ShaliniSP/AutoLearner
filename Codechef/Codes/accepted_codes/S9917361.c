
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int n,arr[105],i,j,even=0,odd=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&arr[j]);
    
        }
        for(i=1;i<=n;i++)
        {
            if((arr[i] % 2) == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even > odd)
        {
            printf("READY FOR BATTLE\n");
        }
        else
        {
            printf("NOT READY\n");
        }
        return 0;
    }
    

