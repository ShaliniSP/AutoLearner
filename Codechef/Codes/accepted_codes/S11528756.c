
    #include<stdio.h>
    int main()
    {
        int n,i,odd=0,even=0,a[100000];
      /*  int T;
        scanf("%d",&T);
        while(T--)
        {
            even=0,odd=0;*/
             scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even>odd)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
       // }
    
        return 0;
    }
    

