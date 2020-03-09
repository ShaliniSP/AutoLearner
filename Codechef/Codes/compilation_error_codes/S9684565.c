
    #include<stdio.h>
    int main()
    {
     int n;
     scanf("%d",&n);
     int i,wpn,e=0,o=0;
     for(i=0;i<n;i++)
      {
        scanf("%d",&wpn);
        (wpn%2==0)?e++:o++; 
      }
      (e>o)?printf("READY FOR BATTLE"):printf("NOT READY");
     return 0;

