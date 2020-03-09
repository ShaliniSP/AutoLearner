
    #include<stdio.h>
    int main()
    {
     int counte=0,counto=0;
     int n,i,num,a[100];
     scanf("%d",&n);
     for(i=0; i<n; i++)
     {
       scanf("%d",&a[i]);
     }
     for(i=0; i<n; i++)
     {    if(a[i]%2==0)
          { counte++;
          }
          else if(a[i]%2!=0)
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

