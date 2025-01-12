package Arrays;

public class Two_Array_EnhancedLoop {
    public static void main(String[] args) {
        int[][] two_Array={{1,2,3},{4,5,6},{7,8,9,0}};
        int inner=0;
        int outer=0;
        for(int arr[]:two_Array){
            System.out.println("Index "+(outer++) +" : ");
            for (int value:arr){
                 System.out.println("Index "+(inner++)+" Value : "+value);
            } 
            inner=0;

            System.out.println("==============================");

        }
    }
}
