
    #include<stdio.h>
    int main(void)
    {int n,c1=0,c2=0,a,i;
         scanf("%d",&n);
         for(i=1;i<=n;i++)
         {scanf("%d",&a);
         if(a%2==0)
         c1++;
        else
         c2++;
    } 
     if(c1>c2)
     printf("READY FOR BATTLE\n");
     else
     printf("NOT READY\n");
     return 0;}
    

