import java.util.*;

public class PythagoreanTriplet
{

    static boolean isPythagoreanTriplet(int arr[])
    {
        for(int i=0;i<3;i++)
        {
            int s=0;
            for(int j=0;j<3;j++)
            {
                if(j==i) continue;
                s+=arr[j]*arr[j];
            }
            if(arr[i]*arr[i]==s) return true;
        }
        return false;
    }
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int arr[]=new int[3];
        arr[0]=sc.nextInt();
        arr[1]=sc.nextInt();
        arr[2]=sc.nextInt();
        System.out.println(isPythagoreanTriplet(arr));
    }
}