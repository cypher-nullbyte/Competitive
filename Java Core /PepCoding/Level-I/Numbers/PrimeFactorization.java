import java.util.Scanner;

public class PrimeFactorization
{
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int div=2;div*div<=n;div++)
        {
            while(n%div==0)
            {
                n=n/div;
                System.out.println(div);
            }
        }
        // Special Case, conside the case for (42: 2*23). The below logic will help to print 23.
        if(n!=1)
        {
            System.out.println(n);
        }
    }
}