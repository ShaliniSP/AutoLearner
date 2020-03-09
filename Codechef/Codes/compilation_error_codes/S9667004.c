
    import java.util.*;
    public class Mahasena
    public static void main()
    { int n,i,c=0,x;
    Scanner sc=new SCanner(System.in());
    n=sc.nextInt();
    for(i=0;i<n;i++)
    { x=sc.nextInt();
    if(x%2==0)
    c++;
    else
    c--;}
    if(c>0)
    System.out.println("READY FOR BATTLE");
    else
    System.out.print("NOT READY");
    }
    

