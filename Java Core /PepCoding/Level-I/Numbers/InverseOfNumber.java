// Number: 21453 
// Inv   : 23154

import java.util.Scanner;

public class InverseOfNumber
{
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int inv=0;
        int counter=1;
        while(n>0)
        {
            // counter++;
            inv+=((int)Math.pow(10,n%10-1))*counter++;
            n/=10;
        }
        System.out.println(inv);
        
    }
}