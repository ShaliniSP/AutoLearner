
    #include <stdio.h>
    
    int main(void) {
        int n,i,e,o,a;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a%2==0)
            e++;
            else
            o++;
        }
        if(e>o)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
        
    	// your code goes here
    	return 0;
    }
    

