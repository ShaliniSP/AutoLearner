
    #include<stdio.h>
    int main()
    {int n;
    int e=0;
    int o=0;
    scanf("%d",&n);
    int a[n];
    while(n--)
    {scanf("%d",&a[n-1]);
    if((a[n-1]%2)==0)
    e++;
    else o++;
    }
    if(e>o)
        printf("READY FOR BATTLE\n");
    else  printf("NOT READY\n");
    return 0;
    }
    

