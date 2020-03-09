
    #include <stdio.h>
    int main()
    {
      int N,i,x=0,y=0;
      int A[100];
      scanf("%d",&N);
      for(i=0;i<=(N-1);i++)
        scanf("%d",&A[i]);
      for(i=0;i<=(N-1);i++)
       { if((A[i]%2)==0)
        x++;
        else
        y++;}
        if(x>y)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
    return(0);
    }

