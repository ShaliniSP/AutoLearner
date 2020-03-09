
    #include<stdio.h>
    int main()
    {
        int n,i,even=0, odd=0;
        int a[100];
        scanf("%d",&n);
        if(1<=n<=100)
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                if(a[i]%2==0)
                {even++;}else odd++;
            }
        }
        
        
        if(even>odd){printf("READY FOR BATTLE");}else{printf("NOT READY");}
        
    return(0);}

