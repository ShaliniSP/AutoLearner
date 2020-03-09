
    #include<stdio.h>
    int main()
    {
     int A[100],N,c=0,d=0,i;
     scanf("%d",&N);
     for(i=0;i<N;i++)
     {
     scanf("%d",&A[i]);
      if(A[i]%2==0)
         c++;
       else
          d++;
     }
     if(c>d)
       printf("READY FOR BATTLE");
      else
        printf("NOT READY");
        }

