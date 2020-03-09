
    #include<stdio.h>
    int main()
    {   int n,a[100]={0},l=0,u=0,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                l++;
            else
                u++;
        }
        if(l>u)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    }
    

