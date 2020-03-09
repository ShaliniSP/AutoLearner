
    #include<stdio.h>
    int main()
    {
            int n;
            scanf("%d\n",&n);
            int arr[n],i,c=0;
            for(i=0;i<n;i++)
            {
                    scanf("%d",&arr[i]);
                    if(arr[i]%2==0)
                            c++;
                    }
            if(c>n-c)
                    printf("READY FOR BATTLE\n");
            else
                    printf("NOT READY FOR BATTLE\n");
            return 0;
    }
                                                                                   
                                                                                   
                                                                                   
    
    

