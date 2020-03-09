
    #include<stdio.h>
    int main(){
        int a;
        scanf("%d",&a);
        int b[a],i,count=0;
        for(i=0;i<a;i++){
            scanf("%d",&b[i]);
            if((b[i]%2)==0) count++;
        }
        if(count>(a-count)) printf("READY FOR BATTLE\n");
        else printf("NOT READY\n");
        return 0;
    }

