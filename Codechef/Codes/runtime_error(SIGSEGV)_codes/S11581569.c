
    #include<stdio.h>
    int main()
    { 
     int t,n,i;
     int eve=0;
     int odd=0;
     scanf("%d",&t);
     int arr[t];
     for(i=0;i<t;i++)
      { scanf("%d",arr[i]);
      if(arr[i]%2==0)
       eve++;
      else
       odd++;
       }
      if(eve>odd)
       printf("READY FOR BATTLE\n");
      else
       printf("NOT READY\n");
       
     return 0;
    }

