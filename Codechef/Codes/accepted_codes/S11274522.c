
    #include<stdio.h>
    int main()
    {
    
        int i,k,ecount=0,ocount=0;
        scanf("%d",&i);
        int a[i];
        for(k=0;k<i;k++)
        {
           scanf("%d",&a[k]);
           if(a[k]%2!=0)
           {
               ocount++;
           }
           else
           {
               ecount++;
           }
    
        }
        if(ecount<=ocount)
        {
            printf("NOT READY\n");
        }
        else
        {
            printf("READY FOR BATTLE \n");
        }
        return 0;
    }
    

