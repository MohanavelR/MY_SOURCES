public class Break_Continue {
    public static void main(String[] args) {
        for(int i=1;i<=10;i++){

            if (i==4){
              System.out.println("Execute Break..");
              break;
            }
            else{
                System.out.println("Running :"+i);
            }
        }
        System.out.println("===========================================");
        for(int i=1;i<=10;i++){
          
            if (i%2==1){
              System.out.println("Execute Continue..");
              continue;
            }
            else{
                System.out.println("Running :"+i);
            }
        }
        
        System.out.println("Break is completetly break that block");
        System.out.println("continue is paricular conition break ");
    }
}
