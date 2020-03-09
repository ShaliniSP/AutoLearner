
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int a[100],n,l=0,u=0;
        scanf("%d",&n);
        for(int i = 0;i<n;i++) {
            int t = 0;
            scanf("%d", &t);
            a[i] = t;
        }
        for(int j = 0;j<n;j++) {
            if(a[j]%2 == 0){
                l++;
            }
            else {
                u++;
            }
        }
        if(l>u)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }
    

