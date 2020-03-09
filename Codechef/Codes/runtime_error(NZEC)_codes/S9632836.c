
     #include<stdio.h>
    
    
    int main()
    {
        int n;
        scanf("%d",&n);
        int i,a[100];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        int cnt1=0,cnt2=0;
         for(i=0;i<n;i++)
         {
             if(a[i]%2==0)
                cnt1++;
             else
                cnt2++;
         }
          if(cnt1>cnt2)
            printf("READY FOR BATTLE");
          else
            printf("NOT READY");
    
    }
    

