
    #include<stdio.h>
    #include<conio.h>
    using namespace std;
    int main()
    {
        int a[50], n, e=0, o=0, i;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
    
        }
        for(i=0; i<n; i++)
        {
            if(a[i]%2==0)
                e++;
            else
                o++;
        }
        if(e>o)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        getch();
        return 0;
    
    }
    

