
    #include<stdio.h>
    int main()
    {
        int nos,i,l=0,ul=0,now;
        scanf("%d",&nos);
        for(i=0;i<nos;i++)
        {
        scanf("%d",&now);
        if(now%2==0)
        l++;
        else
        ul++;
        }
        if(l>ul)
        printf("READY FOR BATTLE\n");
        else
        printf("NOT READY\n");
        return 0;
    }

