
    #include <stdio.h>
    
    int main ()
    {
        int n,luck=0,unluck=0;
        scanf("%d",&n);
        if (n>=1 && n<=100)
            {
                while(n--)
                {
                    int t;
                    scanf("%d",&t);
                    if (t>=1 && t<=100)
                    {if (t%2==0)
                        ++luck;
                    else
                        ++unluck;
                    }
            
                }
            }
        if(luck>unluck)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }

