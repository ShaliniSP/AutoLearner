
    #include<stdio.h>
    int main()
    {
     int n,i,a,b=0,c=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
      scanf("%d",&a);
      (a%2==0)?b++:c++;
     }
     if(b>c)
     printf("READY FOR BATTLE\n");
     else
     printf("NOT READY FOR BATTLE\n");
    }
    

