
    int main(){
    int a,b[],c,d;
    c=0;d=0;
    scanf(a);
    for(int i=0; i<a;i++)
    scanf(b[i]);
    for(int j=0;j<a;j++)
    {
    if(b[j]%2==0) c++;
    else d++;
    }
    if (c>d) printf("READY");
    else printf("NOT READY");
    return 0;
    }

