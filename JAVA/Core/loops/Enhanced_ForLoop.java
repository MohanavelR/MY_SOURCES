package loops;



public class Enhanced_ForLoop {
    public static void main(String[] args) {
        int[] numbers={21,34,56,78,90,45};
        System.err.println("Number Array:"+java.util.Arrays.toString(numbers)); 
        int a=0;
        for(int number : numbers){
            System.out.println("Index "+a+" Value :"+number);
            a++;
        }
    }
}
