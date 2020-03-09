
    #include<stdio.h>
    int main()
    {
        int n,c=0,i,f=0;
        //printf("Enter no. of soldiers\n");
        scanf("%d",&n);
        int a[n];
        //printf("Enter the no. of weapons\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        i=0;
        while(i<n)
        {
            if(a[i]%2==0)
            {
                c++;
            }
            else
            {
                f++;
            }
            i++;
        }
        if(c>f)
        {
            printf("READY FOR BATTLE\n");
        }
        else
        {
            printf("NOT READY\n");
        }
      return 0;
    }

