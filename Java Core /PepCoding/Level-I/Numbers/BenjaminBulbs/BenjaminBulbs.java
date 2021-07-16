import java.util.*;

public class BenjaminBulbs
{
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i*i<=n;i++)
        {
            System.out.println(i*i);
        }
    }
    // Only the bulbs at the perfect-square-positions will keep on. Because they have odd number of factors. See attached pic.

}