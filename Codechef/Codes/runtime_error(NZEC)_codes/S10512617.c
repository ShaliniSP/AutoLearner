
    #include<stdio.h>
    int main()
    {
       int n,even=0,odd=0,i;
       scanf("%d",&n);
       int arr[n];
       for(i=0;i<n;i++)
       {
           scanf("%d",&arr[i]);
           if((arr[i]%2)==0)
            even++;
           else
            odd++;
       }
       if(even>odd)
        printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    
    
        }
    
    
    
    
    
    
    
    
    

