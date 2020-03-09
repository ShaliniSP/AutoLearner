
    include<stdio.h>
    int main()
    {
        int n,i,a[105],count=0;
        scanf("%d",&n);
          for(i=0;i<n;i++){
            scanf("%d",&a[i]);
              if(a[i]%2==0)
                count++;}
         printf( count > n - count ? "READY FOR BATTLE" : "NOT READY" );
    return 0;
    
    
    }
    

