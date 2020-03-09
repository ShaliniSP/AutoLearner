
    #include<stdio.h>
    
    int main()
    {
        int a,b,c,t,n,cnt_even=0,cnt_odd=0;
        int num[100];
        scanf("%d",&n);
        for(a=0;a<n;a++){
            scanf("%d",&num[a]);
            if(num[a]%2==0){cnt_even=cnt_even+1;}
            if(num[a]%2==1){cnt_odd=cnt_odd+1;}
        }  if(cnt_even>cnt_odd){
            printf("READY FOR BATTLE\n");
        }else{printf("NOT READY\n");}
        return 0;
    }
    

