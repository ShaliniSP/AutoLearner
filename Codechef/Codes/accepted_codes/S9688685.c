
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int n,a,count=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&a);
            if((a%2)==0)
                count++;
            else
                count--;
        }
        if (count>0)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        return 0;
    }
    

