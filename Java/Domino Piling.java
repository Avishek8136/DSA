import java.util.*;
public class Solution{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String val=in.nextLine();
        String[] vals=val.split(" ");
        int[] va=new int[2];
        for (int i=0;i<2;i++){
            va[i]=Integer.parseInt(vals[i]);
        }
        int c=va[0]*va[1];
        System.out.println(c/2);
    }
}