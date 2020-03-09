
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i,n,even=0,odd=0;
        scanf("%d",&n);
        int a;
        for(i=0;i<n;i++)
        {
        scanf("%d",&a);
        if(a%2==0)
        {
            even++;
        }
        else
            odd++;
        if(even>odd)
        {
            printf("READY FOR BATTLE\n");
            break;
        }
        else{
            printf("NOT READY\n");
            break;}
        }
        return 0;
    }
    

