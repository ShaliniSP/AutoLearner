
    #include<stdio.h>
    int main()
    {
            int n,c1=0,c2=0,i;
            scanf("%d",&n);
            int arr[n];
            for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }
            for(i=0;i<n;i++)
            {
                if(arr[i]%2==0)
                {
                    c1++;
                }
                else
                {
                    c2++;
                }
            }
            if(c1>c2)
            {
                printf("READY FOR BATTLE\n");
            }
            else
            {
                printf("NOT READY\n");
            }
        return 0;
    }
    

