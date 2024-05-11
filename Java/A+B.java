import java.util.Scanner;
public class Solution{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int t= in.nextInt();
        in.nextLine();
        for(int i=0;i<t;i++){
            String val=in.nextLine();
            String[] vals=val.split(" ");
            int a=Integer.parseInt(vals[0]);
            int b=Integer.parseInt(vals[1]);
            System.out.println(a+b);
        }
    }
}