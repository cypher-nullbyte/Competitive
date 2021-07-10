import java.util.Scanner;

public class Z
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    System.out.print("Enter the value of n:");
	    int n=sc.nextInt();
	    sc.close();
        for(int i=0;i<n;i++)
        {
            if(i==0 || i==n-1)
            {   
                for(int j=0;j<n;j++) System.out.print("*");
                System.out.println();
            }
            else
            {
                for(int j=0;j<n-i-1;j++) System.out.print(" ");
                System.out.println("*");
                
            }
        }
	}
}
