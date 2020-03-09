
    #include<stdio.h>
    
    int main()
    {
     int a,b[100],odd=0,even=0;
     printf("enter no. of soldiers\n");
     scanf("%d",&a);
     printf("enter number of weapons for each soldier\n");
     int i=0;
     while(i<x)
     {
     scanf("%d",&b[i]);
     i++;
        }
        i=0;
     while(i<x)
     {
      if(b[i]%2==0)
      even++;
      else
      odd++;
      i++;
      }
      if(odd>=even)
      printf("not ready for the war\n");
      else
      printf("ready for the war\n");
    
     
     return 0;
     }

