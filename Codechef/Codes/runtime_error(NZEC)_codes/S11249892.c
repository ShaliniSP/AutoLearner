
    #include<stdio.h>
    int main(void)
    {
            int n,even=0,odd=0;
            int i,j;
            int a[1000];
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                    scanf("%d",&a[i]);
            }
            for(j=0;j<n;j++)
            {
                    if(a[j]%2==0)
                            even++;
                    else
                            odd++;
            }
            if(even>odd)
                    printf("READY FOR BATTLE\n");
            else
                    printf("NOT READY\n");
    }
    

