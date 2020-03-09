
    #include<stdio.h>
    int main()
    {
     int counte=0,counto=0;
     int n,i,num,a[101];
     scanf("%d",&n);
     for(i=0; i<n; i++)
     {
       scanf("%d",&a[i]);
       if(a[i]%2==0)
       {
         counte++;
       }
       else
       {counto++;
       }   
     }
     if(counte>counto)
     {
     printf("READY FOR BATTLE");
    }
    else
    { 
      printf("NOT READY");
    }
    } 

