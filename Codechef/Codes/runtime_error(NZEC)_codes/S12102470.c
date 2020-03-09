
    #include<stdio.h>
    int main()
    {
     int n,a,eve=0,odd=0,i;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
      scanf("%d",&a);
      if(a==1||(a%2)!=0)
      odd++;
      else
      eve++;
     }
     if(eve>odd)
     printf("READY FOR BATTLE\n");
     else
     printf("NOT READY\n");
    }
    

