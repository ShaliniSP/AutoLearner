
    #include <stdio.h>
    
    int main(void) {
    int n,count=0,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&i);
        if(i%2==0)count++;
    }
    if(count>n/2)printf("READY FOR BATTLE");
    else printf("NOT READY");
    	return 0;
    }

