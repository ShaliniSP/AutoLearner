
    #include <stdio.h>
    #include <stdlib.h>
    int main()
    {
    int N,sum=0,i=0;
    int arr[101];
    scanf("%d",&N);
    while(i<N)
    {
    scanf("%d",(arr+i));
    if(arr[i]%2==1)
    sum++;
    else
    sum--;
    i++;
    }
    if(sum>0)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }
    

