
    #include<stdio.h>
    #include<math.h>
    int main()
    {
    int n, ce,co,a,i;
    scanf("%d",&n);
    ce=co=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    if(ce>co)
    {
        printf("READY FOR BATTLE\n");
    }
    else
    {
        printf("NOT READY\n");
    }
        return 0;
    }

