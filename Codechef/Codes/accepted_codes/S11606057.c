
        #include<stdio.h>
        int main()
        {
           int n,i,e=0;
           int a[100];
           scanf("%d",&n);
           for(i=0;i<n;i++)
           scanf("%d",&a[i]);
           for(i=0;i<n;i++)
           {
               if(a[i]%2==0)
               e++;
           }
           if(e>n-e)
           printf("READY FOR BATTLE");
           else
           printf("NOT READY");
            return 0;
        } 

