
    #include<stdio.h>
    
    int main()
    {
        int n, even=0, odd=0;
        scanf("%d", &n);
        int a[1000], i;
        for(i=0;i<n;i++)
        scanf("%d", &a[i]);
        for(i=0;i<n;i++)
        {
                        if(a[i]%2==0)
                        even++;
                        else
                            odd++;
                            }
        if(even>odd)
        printf("READY FOR BATTLE\n");
        else
        printf("NOT READY\n");
    
    }
    

