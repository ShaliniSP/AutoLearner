
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    
    inline int getInt()
    {
    	char c;
    	int val = 0; 
    	while (!isdigit(c = getchar_unlocked()));
    	do {
    		val = val*10 + (c - '0');
    	} while (isdigit(c = getchar_unlocked()));
    	return val;
    }
    int getInt();
    
    int main()
    {
    	int n = getInt();
    	int even = 0, i;
    	for (i=0; i<n; i++)
    		if ((getInt() % 2) == 0)
    			even++;
    	printf("%s\n", even > (n - even)? "READY FOR BATTLE":"NOT READY");
    	return 0;
    }
    

