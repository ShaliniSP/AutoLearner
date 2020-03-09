
    #include<stdio.h>
    
    int main()
        {
            int n,a[100],i;
            int even = 0;
            int odd = 0;
            scanf("%d",&n);
            
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                
                if(a[i]%2==0)
                {
                    even++;
                }
                else{
                    odd++;
                }
            }
            
            if(odd<even)
            {
                printf("READY FOR BATTLE");
            }
            else{
                  printf("NOT READY");
            }
            return 0;
            
        }

