package ArraySort;
import java.util.Arrays;
public class ArraySort {
    public static int search(int array[], int key)
    {
        for(int i=0; i<array.length; i++)
        {
            if(array[i]==key)
            {
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int a1[]=new int[] {2,3,5,8,15,2,2};
        for (int i=0; i<a1.length; i++){
        System.out.print(a1[i]+" ");
        }
        Arrays.sort(a1);
        System.out.println();

        for(int i=0; i<a1.length; i++)
        {
            System.out.print(a1[i]+" ");
        }
        int indexvalue= search(a1,9);
        System.out.println(indexvalue);
    }
}
