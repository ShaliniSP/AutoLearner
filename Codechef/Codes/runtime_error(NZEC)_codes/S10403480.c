
    #include <stdio.h>
    
    int main(void) 
    {
        int a[100],i,e=0,o=0,n;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }    
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                e++;
            else
                o++;
        }
        if(e>o)
         printf("READY FOR BATTLE");
        else
         printf("NOT READY");
    }
    
    

