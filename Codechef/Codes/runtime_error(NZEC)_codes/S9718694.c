
    #include<stdio.h>
    int main()
    {
     int counte=0,counto=0;
     int n,i,num;
     scanf("%d",&n);
     for(i=0; i<n; i++)
     {
       scanf("%d",&num);
       if(num%2==0)
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

