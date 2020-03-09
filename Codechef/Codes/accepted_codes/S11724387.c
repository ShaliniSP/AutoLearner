
    #include<stdio.h>
    
    int main()
    {int wp[100];
     int n;
     int uls=0;
     int ls=0;
     scanf("%d",&n);
     int i=0;
     while(i<n)
      {
        scanf("%d",&wp[i]);
         i++;
      }    
     for(i=0;i<n;i++)
       {
         if(wp[i]%2==0)
             ls++;
         else
              uls++;
       }
      if(ls>uls)
        {
          printf("READY FOR BATTLE");
        }
      else
         printf("NOT READY");    
       return 0;
     }               

