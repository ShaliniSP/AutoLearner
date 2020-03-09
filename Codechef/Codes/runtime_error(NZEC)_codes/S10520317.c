
    #include<stdio.h>
    #include<math.h>
    
    int main()
    {
        int n,win = 0,lose =0,a[100],i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2 == 0)
            {
                win++;
            }
            else
            {
                lose++;
            }
        }
        if(win > lose)
        {
            printf("READY FOR BATTLE");
        }
        else
        {
            printf("NOT READY");
        }
    }
    

