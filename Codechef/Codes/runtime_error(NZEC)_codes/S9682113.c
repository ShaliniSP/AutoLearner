
    #include <stdio.h>
    #include <stdlib.h>
    #include<string.h>
    void main()
    {int n,p,a,lucky,unlucky;char s[100];
        scanf("%d",&n);
    scanf(" %[^\n]s",s);
        p=strlen(s);
    if(0<n && n<101)
    {
    for(a=0;a<p;a++)
        {   if(s[a]==' ')
        {
            if(s[a-1]%2==0)
            {
                lucky=lucky+1;
            }
            else
            {
                unlucky=unlucky+1;
            }
    
        }}
        if(s[p-1]%2==0)
        {
            lucky=lucky+1;
        }
        else
        {
            unlucky=unlucky+1;
        }
        if(lucky>unlucky)
        {
            printf("READY FOR BATTLE");
    
        }
        else
        {
            printf("NOT READY");
        }
    }
    else
    {
        exit(0);
    }
    }

