
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int n,i,even=0,odd=0;
        int *arr = malloc(n*sizeof(int));
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",arr+i);
        }
        for(i=1;i<=n;i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }
            else{
                odd++;
            }
        }
        if(even>odd)
        {
            printf("READY FOR BATTLE\n");
        }
        else{
            printf("NOT READY\n");
        }
        return 0;
    }
    

