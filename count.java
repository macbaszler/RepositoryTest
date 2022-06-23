import java.util.Scanner;
public class Count
{
//This program just shows message on a console.
public static void main(String [] args)
{
    System.out.println("Enter a number");
    Scanner myScanner = new Scanner( System.in );
         int a;
         a = myScanner.nextInt();
         int s;
         s=a;
         do{
        a = a-1;
    s = a+s;
        System.out.println((s-a)+"+"+a+"="+s);
            }while(a>0);
         System.out.println("S= "+s);
}
}