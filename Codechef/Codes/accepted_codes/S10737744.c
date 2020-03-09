
    #include<stdio.h>
    #include<math.h>
    int main()
    {
    	int n, c = 0, t;
    	char *s[2] = {"NOT READY", "READY FOR BATTLE"};
    	scanf("%d", &n);
    	while(n--)
    	{
    		scanf("%d", &t);
    		c += pow(-1, t % 2);
    	}
    	printf("%s", s[c > 0]);
    	return 0;
    }

