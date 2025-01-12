package Arrays;

import java.util.Arrays;

public class Array_in_EnhancedLoop {
     public static void main(String[] args) {
    int[] arr={10,20,30,50,67,89,90};
    System.out.println("My Arrays :"+Arrays.toString(arr));
    int index=0;
    for(int i : arr){
        System.out.println("Index "+(index++)+" value is "+i);
    }
 } 
}
