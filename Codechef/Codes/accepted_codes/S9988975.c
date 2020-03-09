
    #include<stdio.h>
    int main()
    {
            int n,i;
            int odd=0,even=0;
    
            s1:
            scanf("%d",&n);
            if(n<1 || n>100)
            {
                goto s1;
            }
    
            int a[n];
    
            s2:
            for(i=0;i<n;i++)
            {
                    scanf("%d",&a[i]);
                    if(a[i]<1 || a[i]>100)
                    {
                        goto s2;
                    }
            }
    
            for(i=0;i<n;i++)
            {
                    if(a[i]%2==0)
                    {
                        even++;
                    }
    
                    else
                    {
                        odd++;
                    }
            }
    
            if(even>odd)
                printf("READY FOR BATTLE");
            else
                printf("NOT READY");
    
            return 0;
    
    
    
    }
    

