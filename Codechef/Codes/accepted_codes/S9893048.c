
    #include<stdio.h>
    int main(void)
    {
    int i,aeven=0,aodd=0,N,a;
    scanf("%d",&N);
    for(i=0;i<N;i++){
    scanf("%d",&a);
    ((a%2==0)?(aeven++):(aodd++));
    }
    ((aeven>aodd)?(printf("READY FOR BATTLE\n")):(printf("NOT READY\n")));
    return 0;
    }

