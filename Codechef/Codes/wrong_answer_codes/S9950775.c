
    #include<stdio.h>
    #define MAX 100
    int main()
    {
        int n,i,j=0,k=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
     
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                j++;
            else
                k++;
        }
        if(j>k)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY FOR BATTLE\n");
        return 0;
    }
     

