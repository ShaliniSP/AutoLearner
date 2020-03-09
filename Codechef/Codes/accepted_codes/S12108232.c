
    #include <stdio.h>
    
    int main()
    {
        int t;
        int yes;
        int no;
        int i;
        yes = 0;
        no = 0;
        scanf("%d", &t);
        int a[t];
        for(i = 0; i < t; i++)
        {
            scanf("%d ", &a[i]);
        }
    
        for(i = 0; i < t; i++)
        {
            if((a[i] % 2) == 0)
            {
                yes++;
            }
            else
            {
                no++;
            }
        }
        if(yes > no)
        {
            printf("READY FOR BATTLE\n");
        }
        else
        {
            printf("NOT READY\n");
        }
        return 0;
    }
    

