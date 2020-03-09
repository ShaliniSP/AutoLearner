
    #include<stdio.h>
    int main()
    {int n,i,e,o,a[1001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    e=0;
    o=0;
    for(i=0;i<n;i++)
        {if(a[i]>0)
            {if((a[i]%2)==0)
            {
                ++e;
            }else{++o;}
        }else printf("NOT READY\n");}
        if(e>o)
            printf("READY FOR BATTLE\n");
        else printf("NOT READY\n");
        return 0;
    }
    

