import java.util.Scanner;

public class Nam {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            String name = scanner.next();
            int n = name.length();
            int out=0;
            if(name.charAt(0)=='_')
            {
                out++;
            }
            if(name.charAt(name.length()-1)=='_')
            {
                out++;
            }
            if(n==1)
            {
                if(name.charAt(0)=='^')
                {out=1;}
                else{
                out=2;}
            }
            for (int j = 0; j < n - 1; j++) {
                //if (name.charAt(j) != name.charAt(j+1) && name.charAt(j+1) != name.charAt(j+2) && name.charAt(j) != name.charAt(j+2)) 
                if(name.charAt(j)=='^' && name.charAt(j+1)=='^')
                {
                    continue;
                }
                else if(name.charAt(j)=='^' && name.charAt(j+1)=='_'&& name.charAt(j)=='^')
                {
                    continue;
                }
                else if(name.charAt(j)=='_'&& name.charAt(j+1)=='^')
                {
                    continue;
                }
                else{
                    out=out+1;
                    continue;
                }
            }
            System.out.println(out);
        }
        scanner.close();
    }
}
