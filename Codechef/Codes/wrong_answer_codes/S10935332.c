
    #include<stdio.h>
    int main()
    {
     int x,y[1000],i,odd,even;
     printf("enter number of soldiers \n");
     scanf("%d",&x);
     printf("enter number of weapons for each soldier\n");
     for(i=0;i<x;i++)
     {
      scanf("%d",&y[i]);
      }
      for(i=0;i<x;i++)
      {
       if(y[i]%2==0)
       even++;
       else
       odd++;
       }
       if(odd>even)
       printf("not ready\n");
       else
       printf("ready\n");
       return 0;
       }
      
     

