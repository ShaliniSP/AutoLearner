
    #include <stdio.h>
    #include <string.h>
    
    int main()
    {
      int W[100],I=0,S,O,E;
      scanf("%d",&S);
      while ( I < S && scanf("%d", &W[I++]) == 1);
        for (I=0,O=0,E=0;I<S;I++)
        {
            if (W[I]%2)
                O++;
            else
                E++;
        }
        if ( E > O)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
      return 0;
    }
    

