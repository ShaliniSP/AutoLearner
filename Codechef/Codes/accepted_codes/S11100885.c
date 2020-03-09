
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <string.h>
    
    int main() {
       //int T;
       
       //scanf("%d%*c", &T);
       //while (T > 0) {
       
       
       int n, a, i, even = 0, odd = 0;
       scanf("%d", &n);
       for (i = 0; i < n; i++) {
          scanf("%d", &a);
          if (a % 2 == 0) even++;
          else            odd++;
       }
       
       if (even > odd)
          printf("READY FOR BATTLE");
       else
          printf("NOT READY");
       
       
          //T--;
       //}
       return 0;
    }

