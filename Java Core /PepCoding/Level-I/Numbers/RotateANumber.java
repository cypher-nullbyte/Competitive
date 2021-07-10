// k can be +,- 
// k+ : clockwise
// k- : anti-clockwise

import java.util.Scanner;

public class RotateANumber 
{
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int dig=0;
        int n2=n;
        while(n2>0)
        {
            dig++;
            n2/=10;
        }
        k%=dig;
        if(k<0) k+=dig;
        int pow1=(int)Math.pow(10,k);
        int pow2=(int)Math.pow(10,dig-k);
        int r= n%pow1;
        int q=n/pow1;
        int rot=r*pow2+q;
        System.out.println(rot);
        
    }
}