
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    int main()
    {int n,i,j,e=0,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    if(a[i]%2==0)
    e++;
    }
    if(e>n/2)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }

