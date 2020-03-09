
    #include <stdio.h>
    int main()
    {
       int N=0;
       scanf("%d",&N);
       int a[100];
       int e=0;int b=0;int i=0;
       for(i=0;i<N;i++)
        scanf("%d",&a[i]);
       for(i=0;i<N;i++)
       {
           if((a[i]%2)==0) e++;
           else b++;
       }
       if(e<=b)
        printf("Not Ready For Battle");
       else
        printf("Ready for batte");
    }
    

