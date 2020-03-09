
    #include<stdio.h>
    int main()
    {
      int n,a[50],i,odd,even;
      
      scanf("%d",&n);
      
      for(i=0;i<n;i++)
       scanf("%d",&a[i]);
     
      for(i=0;i<n;i++)
      {
        if(a[i]%2!=0)
          odd++;
        else
           even++;    
      }
       
     if(even>odd)
       printf("READY FOR BATTLE");
     else
      printf("NOT READY");
    
    return 0;
    
    
    
    }

