
    #include<stdio.h>
    int main()
    {
       int n,even=0,odd=0,i,num;
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
           scanf("%d",&num);
           if((num%2)==0)
            even++;
           else
            odd++;
       }
       if(even>odd)
        printf("READY FOR BATTLE");
        else
            printf("NOT READY");
    
    
        }
    
    
    
    
    
    
    
    
    

