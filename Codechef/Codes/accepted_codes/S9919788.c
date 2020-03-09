
    #include <stdio.h>
    
    int main(void) {
    int n,count=0,i[100],j;
    scanf("%d",&n);
    
        for(j=0;j<n;j++)
        {scanf("%d",&i[j]);
        
        if(i[j]%2==0)count++;}
    
    if(count>n/2)printf("READY FOR BATTLE");
    else printf("NOT READY");
    	return 0;
    }

