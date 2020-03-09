
    #include <stdio.h>
    #define get getchar_unlocked
    inline int scan()
    {
        int n=0,s=1;
        char p=get();
        if(p=='-')  s=-1;
        while((p<'0'||p>'9')&&p!=EOF&&p!='-') p=get();
        if(p=='-') s=-1,p=get();
        while(p>='0'&&p<='9') { n = (n<< 3) + (n<< 1) + (p - '0'); p=get(); }
        return n*s;
    }
    int main(void) {
    	int n,x,cntevn=0,cntodd=0;
    	n=scan();
    	while(n--)
    	{
    	    x=scan();
    	    if(x%2==0) cntevn++;
    	    else cntodd++;
    	}
    	if(cntevn>cntodd) printf("READY FOR BATTLE\n");
    	else printf("NOT READY\n");
    	return 0;
    }

