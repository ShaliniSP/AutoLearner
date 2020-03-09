
    #include <stdio.h>
    
    int main()
    {
        int n,i,p,l;
        int a[500];
        while(scanf("%d",&n)==1){
            p=0;
            for(i=0;i<n;i++){
                scanf("%d",&a[i]);
                if(a[i]%2==0){
                    p++;
                }
            }
            l=n-p;
            
            if(p>l){
                printf("READY FOR BATTLE\n");
            }
            else {printf("NOT READY\n");}
        }
        return 0;
    }

