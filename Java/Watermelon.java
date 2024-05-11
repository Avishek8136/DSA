import java.util.Scanner;
public class Solution{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int kilos=in.nextInt();
        if(kilos%2==0 && kilos!=2){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}