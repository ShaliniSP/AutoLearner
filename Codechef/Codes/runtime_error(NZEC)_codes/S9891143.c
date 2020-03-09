
    #include <stdio.h>
    void main()
    {
      int N,i,r,x=0,y=0;
      char A[100];
      scanf("%d",&N);
      for(i=0;i<=(N-1);i++)
        scanf("%d",&A[i]);
      for(i=0;i<=(N-1);i++)
      {r=(A[i]%2);
        if(r==0)
        x++;
        else
        y++;}
        if(x>y)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
    }
    

