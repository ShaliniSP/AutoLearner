
    #include <stdio.h>
    int main()
    {
    	int n, a, p[2];
    	p[0]=0; p[1]=0;
    	scanf("%d\n", &n);
    	while (n--){
    		scanf("%d", &a);
    		p[a%2]++;
    	}
    	if (p[0]>p[1]) printf("READY FOR BATTLE");
    	else printf("NOT READY");
    	return (0);
    }

