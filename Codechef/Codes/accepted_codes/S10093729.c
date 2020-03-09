
    #include <stdio.h>
    
    int main(void) 
    {
        int n,i=0,odd=0,ev=0,b,a[101];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b=a[i];
            if(b%2==0)
            {
                ev=ev+1;
            }
            else
            {
                odd=odd+1;
            }
        }
        if(odd>=ev)
        {
            printf("NOT READY");
        }
        if(ev>odd)
        {
            printf("READY FOR BATTLE");
        }
    	return 0;
    }
    

