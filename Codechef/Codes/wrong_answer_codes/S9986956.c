
    #include<stdio.h>
    int main()
    {
        int w,n,a[100],b[100];
        scanf("%d",&n);
        int e=0,o=0;
        while(n>0)
        {
            scanf("%d",&w);
            if(w%2==0)
               {
                a[e]=w;
                e++;
               }
            else
            {
               b[o]=w;
                o++;
            }
            n--;
     
        }
        if(e>o)
    	{
    	    printf("READY");
    	}
    	else
    	{
    	    printf("NOT READY");
    	}
    return 0;
    }

