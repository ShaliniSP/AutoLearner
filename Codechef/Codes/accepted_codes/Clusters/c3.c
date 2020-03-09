
    #include<stdio.h>
    
    int isEven(int n)
    {
        if (n&1==1)
            return 0;
        else
            return 1;
    }
    
    
    int main()
    {
        int n,i,even=0,odd=0;
        scanf("%d",&n);
        int arr[n];
        for(i=0; i<n; i++)
            scanf("%d", &arr[i]);
        for(i=0;i<n;i++)
        {
            if(isEven(arr[i]))
                even++;
            else
                odd++;
        }
        if (even>odd)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    }
    

