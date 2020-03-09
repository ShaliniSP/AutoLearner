
    #include <stdio.h>
    
    int even(int n)
    {
        if(n%2==0)
        {
            return 1;
        }
        else
        return 0;
    }
    int main(void) {
        int n,c=0,a,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(even(a))
            {
                c=c+1;
            }
        }
        if(c>(n-c))
        {
            printf("READY FOR BATTLE");
        }
        else
        printf("NOT READY");
    	return 0;
    }
    

