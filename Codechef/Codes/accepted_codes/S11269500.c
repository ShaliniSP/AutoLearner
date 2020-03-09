
    #include<stdio.h>
    int main(){
       int n,a,i,wincount=0,loosecount=0;
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
           scanf("%d",&a);
           if(a%2==0)
            wincount++;
            else
                loosecount++;
       }
       if(wincount>loosecount)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
        return 0;
    }

