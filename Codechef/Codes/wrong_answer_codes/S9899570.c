
    #include <stdio.h>
    
    int main(void) {
    int i,n,a[101],e=0,d=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        { e=e+1;
            }
    else {d=d+1;
        
    }
    }
    if(e>d)
    printf("\nREADY FOR BATTLE");
    else if(e<=d)
    printf("\nNOT READY");
    
    
    return 0;
    }
    

