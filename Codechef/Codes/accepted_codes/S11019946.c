
    #include <stdio.h>
    int main() 
    {
        int a[100],i,j=0,k=0,n;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                j++;
                continue;
            }
            else
            {
                k++;
                continue;
            }
        }
        if(j>k)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    	return 0;
    }

