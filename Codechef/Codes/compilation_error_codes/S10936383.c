
    #include<stdio.h>
    #include<conio.h>
    int main()
    {
     int a,b[100],odd=0,even=0;
     printf("enter no. of soldiers\n");
     scanf("%d",&a);
     printf("enter number of weapons for each soldier\n");
     for(int i=0;i<a;i++)
     {
     scanf("%d",&b[i]);
        }
     for(i=0;i<a;i++)
     {
      if(b[i]%2==0)
      even++;
      else
      odd++;
      }
      if(odd>=even)
      printf("not ready for the war\n");
      else
      printf("ready for the war\n");
    
     getch();
     return 0;
     }

