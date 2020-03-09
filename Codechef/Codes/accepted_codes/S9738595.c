
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
        int n,i,e=0,o=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&i);
            if(i%2==0)
                ++e;
            else
                ++o;
        }
        if(e>o)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        return 0;
    }
    

