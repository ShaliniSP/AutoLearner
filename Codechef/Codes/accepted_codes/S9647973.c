
    #include <stdio.h>
     
    int main() 
    {
        int N, e, o, t;
        scanf("%d",&N);
        e=o=0;
        while(N--)
        {
            scanf("%d",&t);
            if(t%2==0)
                e++;
            else
                o++;
        }
        if(e>o)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }

