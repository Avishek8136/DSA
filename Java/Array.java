public class Array {
        //1D Array
        
        public static void main(String[] args) {
            int[] a1=new int[6];
            int count=0;
            for(int i=0;i<a1.length;i++)
            {
                a1[i]=count;
                count++;
            }
            for(int i=0;i<a1.length;i++)
            {
                System.out.println(a1[i]);
            }
            //2D Array
            int[][] a= new int[2][2];
            count=0;
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    a[i][j]=count;
                    count++;
                }
            }
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    System.out.print(a[i][j]+" ");
                }
                System.out.println();
            }
        }
}
