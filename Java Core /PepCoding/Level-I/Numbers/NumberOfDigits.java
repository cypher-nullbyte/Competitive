import java.util.Scanner;
public class NumberOfDigits
{
    public static void main(String []args)
    {
    
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int dig=1;
        int x=10;
        //---------------Approach 1
        while(n/x>0)
        {
            dig++;
            x*=10;
        }
        //--------------Approach 2
        // dig=0;
        // while(n>0)
        // {
        //     dig++;
        //     n=n/10;
        // }
        
        System.out.println(dig);
    
    }
}
