
    #include<stdio.h>
    
    int main()
    {
        int n, i, e, o, s;
        e = o = 0;
        scanf("%d", &n);
        while(n--) {
            scanf("%d", &s);
            s % 2 == 0 ?  e++ : o++;
        }
        e > o ? printf("%s\n", "READY FOR BATTLE") : printf("%s\n", "NOT READY");
    }
    

