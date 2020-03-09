
    #include <stdio.h>
    int main() {
    	int t,n,c=0,a=0;
    	scanf("%d",&t);
    	while(t>0&&t<=100){
    	    scanf("%d",&n);
    	    if(n%2==0)
    	    c++;
    	    else a++;
    	    t--;
    	}
    	if(c>a)
    	    printf("READY FOR BATTLE");
    	    else printf("NOT READY");
    	return 0;
    }

