public class good {
    public static void main(String[] args){
        int i, j;
        for(j=0, i=0; i<=5; i ++){
            j+=i;
            System.out.println(i);
            if(i==5){
                System.out.println("=");
                System.out.println(j);
            }else{
                System.out.println("+");
            }
        }
    }
}