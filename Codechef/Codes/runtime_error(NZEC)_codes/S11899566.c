
    #include<stdio.h>
    int main()
    {   int n,a[100]={0},l=0,u=0,i=0;
        scanf("%d",&n);
        while(i<n)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                l++;
            else
                u++;
                i++;
        }
        if(l>u)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    }
    

