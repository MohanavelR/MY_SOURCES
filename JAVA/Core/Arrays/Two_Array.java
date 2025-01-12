package Arrays;

public class Two_Array {
 public static void main(String[] args) {
    int[][] two_Array={{1,2,3},{4,5,6},{7,8,9,0}};
    System.out.println("Index 0 in index 1 : "+two_Array[0][1]);
    for(int i=0;i<two_Array.length;i++){
        for(int j=0;j<two_Array[i].length;j++){
            System.out.println("Index "+i+ " Values :"+two_Array[i][j]);
          }
          
          System.out.println("=========================================");
      }

 }   
}
