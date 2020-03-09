
    #include<stdio.h>
    int main() {
    	// your code goes here
      int n,q,i,even=0,odd=0;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
        scanf("%d",&q);
        if(q%2==0)
          even++;
        else
          odd++;
      }
      if(even>odd)
        printf("READY FOR BATTLE");
      else
        printf("NOT READY");
    	return 0;
    }
    

