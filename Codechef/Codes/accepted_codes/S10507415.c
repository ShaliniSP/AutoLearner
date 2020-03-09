
     #include<stdio.h>
    
     int main()
     {
         int n,l,u,i,a;
         l=u=0;
         scanf("%d",&n);
         for(i=0;i<n;i++)
         {
             scanf("%d",&a);
             if(a%2==0)
                l++;
             else
                u++;
         }
         if(l>u)
            puts("READY FOR BATTLE");
         else
            puts("NOT READY");
    
         return 0;
     }
    

