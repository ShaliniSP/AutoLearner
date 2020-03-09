
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
     int n,i,j=0,o=0;
     scanf("%d",&n);
     int *a=(int*)malloc(n*sizeof(int));
     for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
      if(a[i]%2==0)
      j++;
      else
      o++;
      }
      if(j>o)
      printf("READY FOR BATTLE\n");
      else
      printf("NOT READY\n");
      return 0;
      } 

