
    #include <stdio.h>
    #include <stdlib.h>
    
    int main(void)
    {
        int n, even = 0, odd = 0;
        scanf("%d", &n);
        int weapons[n], i;
        for (i = 0; i < n; i++) {
        	scanf("%d", &weapons[i]);
        	if (weapons[i] % 2 == 0)
        	    even++;
        	else
        	    odd++;
        }
        printf("%s\n", even > odd ? "READY FOR BATTLE":"NOT READY");
        return EXIT_SUCCESS;
    }

