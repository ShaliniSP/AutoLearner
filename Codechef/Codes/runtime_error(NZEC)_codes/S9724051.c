
    #include<stdio.h>
    int main(){
        int n,i,a[100],co=0,ce=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            if(a[i]%2==0)
                ce++;
            else
                co++;
        }
        if(ce>co)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    }
    

