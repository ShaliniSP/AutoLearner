
    #include<stdio.h>
    
    char * army_status(int [], int);
    int main(void)
    {
        int number, i, army[100];
        scanf("%d", &number);
        for(i = 0; i < number; i++)
        {
            scanf("%d", &army[i]);
        }
        printf("%s\n", army_status(army, number));
        return 0;
    }
    char * army_status(int a[], int n)
    {
        int i, even = 0, odd = 0;
        for(i = 0; i < n; i++)
        {
            if(! (a[i] % 2))
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even > odd)
        {
            return "READY FOR BATTLE";
        }
        return "NOT READY";
    }

