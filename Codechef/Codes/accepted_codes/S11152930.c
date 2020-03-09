
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int n,i,even=0,odd=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            int a;
            scanf("%d",&a);
            if(a%2==0)
                even++;
            else
                odd++;
        }
        if(even>odd)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        return 0;
    }
    

