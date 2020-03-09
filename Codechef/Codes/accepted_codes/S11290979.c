
    #include <stdio.h>
    
    int main()
    {
      int n,i,a[n+1],ctr=0,s=0;
      scanf("%d",&n);
      for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            ctr++;
        else
            s++;
      }
      if(ctr>s)
        printf("READY FOR BATTLE");
      else
        printf("NOT READY");
      return 0;
    }
    

