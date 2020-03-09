
    #include <stdio.h>
    
    int main()
    {
        int n,i,p,a[200],l;
        while(scanf("%d",&n)==1){
            for(i=0;i<n;i++){
                scanf("%d",&a[i]);
                if(a[i]%2==0){
                    p++;
                }
            }
            l=n-p;
            
            if(p>n){
                printf("READY FOR BATTLE\n");
            }
            else printf("NOT READY\n");
        }
    }

