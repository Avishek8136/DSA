import java.util.*;
public class Solution{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String val=in.nextLine();
        String[] vals=val.split(" ");
        int[] va=new int[3];
        for (int i=0;i<3;i++){
            va[i]=Integer.parseInt(vals[i]);
        }
        Arrays.sort(va);
        if((va[0]+va[1])>va[2]){
            System.out.println("0");
        }
        else{
            System.out.println(va[2]-(va[0]+va[1])+1);
        }
    }
}