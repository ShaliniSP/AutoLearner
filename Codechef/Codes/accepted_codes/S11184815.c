
    #include<stdio.h>
    #include<string.h>
    int main()
    {
     int n,a[100],i,c1=0,c2=0;
     scanf("%d\n",&n);
     for (i=0;i<n;i++)
     scanf("%d ",&a[i]);
      for (i=0;i<n;i++){
       if ((a[i]%2)==0)
          c1++;
        else 
        c2++;
        }
        if (c1>c2)
        puts("READY FOR BATTLE\n");
        else
        puts("NOT READY\n");
     return 0;
    }

