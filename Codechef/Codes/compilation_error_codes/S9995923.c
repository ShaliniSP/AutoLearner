
    #include<stdio.h>
    #include<conio.h>
    
    int main()
    { int N,a[100],i=0,c1=0,c2=0;
      scanf("%d",&N);
      while(N>=1&&N<=100)
       { for(i=0;i<N;i++)
         { scanf("%d",a[i])
            if(a[i]%2==0)
             c1++;
            else 
             c2++;
            }
          if(c1>c2)
          printf(""READY FOR BATTLE");
          else 
          printf("NOT READY");   
          }
       return 0;
       }   

