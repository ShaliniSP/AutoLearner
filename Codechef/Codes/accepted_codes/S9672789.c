
    #include<stdio.h>
    int main()
    {
        int n,i,j,c=0,d=0;
        int num[100];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        scanf("%d",&num[i]);
        if (num[i]%2==0)
        {
            c++;
        }
         if (num[i]%2!=0)
            d++;
        }
        if(c<d||c==d)
        {
           printf("NOT READY\n");
        }
        else
    
        {
        printf("READY FOR BATTLE\n");
        }
    
    return 0;
    }

