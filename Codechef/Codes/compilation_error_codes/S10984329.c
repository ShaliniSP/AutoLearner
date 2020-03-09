
    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        int n,i,even=0,odd=0;
        int *a;
        printf("enter the number of digits\n");
        scanf("%d",&n);
        a=malloc(n*sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if (a[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even>odd)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY FOR BATTLE");
        return 0;
    }
    

