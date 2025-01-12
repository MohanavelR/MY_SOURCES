package Arrays;

import java.util.Arrays;
import java.util.Scanner;

public class Return_array_function {
public static void main(String[] args) {
    System.out.println("Return Array :"+Arrays.toString(sendList()));
    @SuppressWarnings("resource")
    Scanner in =new Scanner(System.in);
    System.out.print("Enter Limit : ");   
    int arr[]=new int[in.nextInt()] ;
    for(int i=0;i<arr.length;i++){
        System.out.print("Enter "+ i +"Index Value :");
         arr[i]=in.nextInt();
    }
    System.out.println("Before Array : "+Arrays.toString(arr));
    System.out.println("Sorted Array : "+Arrays.toString(SortArray(arr)));
}   
static int [] sendList(){
    return new int[]{32,56,78,90};
} 
static int [] SortArray(int arr[]){
    int temp;
    for(int i=0;i<arr.length;i++){
        for(int j=i+1;j<arr.length;j++){
           if(arr[i]>arr[j]){
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }
        }
    }
    return arr;
}
}
 
