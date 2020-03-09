
    #include<stdio.h>
    int main()
    {
     int i,sol[100],even=0,odd=0,num;
     printf("Enter the number of soldiers \n");
     scanf("%d", &num);
     for(i=1;i<=num;i++)
     {
      scanf("%d",&sol[i]);
      if(sol[i]%2==0)
      {
       even++;
      }
      else
      {
       odd++;
      }
     }
     if(even>odd)
     printf("\nREADY FOR BATTLE");
     else
     printf("\nNOT READY");
     
    }

