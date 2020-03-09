
    #include<stdio.h>
    int main(){
        int t;
        int n,m,k,tmp;
        scanf("%d",&t);
        while(t--){
            scanf("%d %d %d",&n,&m,&k);
            if(n>m)
            {
                tmp=n;
                n=m;
                m=tmp;
            }
            if(n+k>=m)
                printf("0\n");
            else
                printf("%d\n",m-(n+k));
        }
    }

