
    #include <stdio.h>
    int main()
    {
       int N, A, P[2];
       P[0]=0; P[1]=0;
       scanf("%d\n", &N);
       while (N--)
       {
          scanf("%d", &A);
          P[A%2]++;
       }
       if (P[0]>P[1]) 
           printf("READY FOR BATTLE");
       else 
           printf("NOT READY");
       return (0);
    } 

