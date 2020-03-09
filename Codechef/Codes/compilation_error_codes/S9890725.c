
    #include <stdio.h>
    #include <conio.h>
    #include <stdlib.h>
    
    void main()
    {
      int N,i,r,x=0,y=0;
      char A[100];
      printf("enter the no of soldiers\n");
      scanf("%d",&N);
      if(N>100)
        exit(1);
      printf("enter no of weapons for each of %d soldiers\n",N);
      for(i=0;i<=(N-1);i++)
      {
         scanf("%d",&A[i]);
       }
      for(i=0;i<=(N-1);i++)
      {
        r=(A[i]%2);
        if(r==0)
        x++;
        else
        y++;
      }
        if(x>y)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
        getch();
    }
    

