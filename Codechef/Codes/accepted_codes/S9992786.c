
    #include<stdio.h>
    int main(){
        int n;
        scanf("%d",&n);
        int ar[n];
        int i,even=0;
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
            if(ar[i]%2==0)
                even++;
        }
        if(even>n/2)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    
        return 0;
    }

