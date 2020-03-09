
    #include<stdio.h>
    
    int main()
    {
        int n, i, e, o;
        e = o = 0;
        scanf("%d", &n);
        int sena[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &sena[i]);
        }
        for(i = 0; i < n; i++) {
            if(sena[i] % 2 == 0) {
                e++;
            } else {
                o++;
            }
        }
        e > o ? printf("%s\n", "READY FOR BATTLE") : printf("%s\n", "NOT READY");
    }
    

