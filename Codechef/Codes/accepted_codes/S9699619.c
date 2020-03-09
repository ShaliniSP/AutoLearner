
    #include<string.h>
    #include<stdio.h>
    int main(){
    
      int a[2]={0};
    int N;
        int x;
    
        scanf("%d",&N);
        while(N--)
        {
            scanf("%d",&x);
            a[x%2]++;
    
    
        }
       if(a[0]>a[1])
           printf("READY FOR BATTLE");
       else
          printf("NOT READY");
    
    
    
        return 0;
    
    }
    

