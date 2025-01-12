package Arrays;

import java.util.Arrays;

public class Array_in_Loop {
 public static void main(String[] args) {
    int[] arr={10,20,30,50,67,89,90};
    System.out.println("My Arrays :"+Arrays.toString(arr));
    for(int i=0;i<arr.length;i++){
        System.out.println("Index "+i+" value is "+arr[i]);
    }
 }   
}
