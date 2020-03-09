
    #include <stdio.h>
    
    int main()
    {
       int n,i,e=0,o=0;
       scanf("%d",&n);
       int wep[101];
       for(i=0;i<n;i++)
       {
           scanf("%d",&wep[i]);
           if(wep[i]%2==0)
               e++;
            else
            o++;
       }
       if(e>o)
       printf("ready for battle");
       else 
       printf("not ready for battle");
        return 0;
    }
    

