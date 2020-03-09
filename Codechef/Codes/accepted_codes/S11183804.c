
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    int main()
    {
    int i,n,arr[100],l=0,u=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            l++;
        else
            u++;
    }
    if(l>u)
        printf("READY FOR BATTLE\n");
    else
        printf("NOT READY\n");
    return 0;
    }

