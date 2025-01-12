package Arrays;

import java.util.Arrays;
import java.util.Scanner;

public class Input_storeArr {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner in=new Scanner(System.in);
         System.out.print("Enter Your Array Length :");
         int arr[]=new int[in.nextInt()];
         for(int i=0;i<arr.length;i++){
            System.out.print("Enter "+ i+" index Value :");
            arr[i]=in.nextInt();
         }

        System.out.println("Array :"+Arrays.toString(arr));
          
    }
    
}
