
    #include <stdio.h>
    #include <stdlib.h>
    int main()
    {
    int N,i=0,sum=0;
    int arr[100];
    scanf("%d",&N);
    while(i<N)
    {
    scanf("%d",(arr+i));
    sum=sum+arr[i];
    i++;
    }
    if(sum%2==1)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }

