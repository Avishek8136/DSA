import java.util.Scanner;
public class Intinput {
    
	public static void main (String[] args)
	{
        Scanner objName = new Scanner(System.in);
        int N = objName.nextInt();
		System.out.println(N);
		objName.close();
	}
}