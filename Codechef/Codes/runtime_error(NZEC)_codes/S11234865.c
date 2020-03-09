
    #include<stdio.h>
    int main()
    {
        int i,n,a,s1=0,s2=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            {scanf("%d",&a);
              if((a%2)==0)
                 s1++;
              else
                s2++;
            }
            if(s1>s2)
                 printf("READY FOR BATTLE\n");
            else
                printf("NOT READY\n");
    
    }
    

