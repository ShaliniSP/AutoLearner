
    #include<stdio.h>
    int main(){
    int n,a[100],i,r=O,c=O;
    scanf("%d",&n);
    for(i=O;i<n;i++)
     {  scanf("%d",&a[i]);
        if(a[i]%2==O)
           r++;
        else
            c++;
      }         
    if(r>c)
     printf("READY FOR BATTLE");
    else
     printf("NOT READY FOR BATTLE");
    return 0;
    }

