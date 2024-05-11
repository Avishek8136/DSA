
import java.util.Scanner;
/* Name of the class has to be "Main" only if the class is public. */
public class Bishops
{
	public static void main (String[] args)
	{
		Scanner read= new Scanner(System.in);
		int t=read.nextInt();
		for(int i=0;i<t;i++)
		{
		    int N=read.nextInt();
		    if(N==1)
		        System.out.println("0");
            else if(N!=1)
                System.out.println(2*N-(N/2)-3);
			read.close();
		}	
	}
}