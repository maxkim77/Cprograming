public class Test {
    public static void main(String []args){
        int i = 0;
        int sum = 0;
        while(i < 10) {
            i++;
            if(i%2==1)
            continue;
            // 홀수이면 continue로 아래 코드를 실행하지 않고 다음 반복으로 넘어감
        sum += i; // 짝수일 때만 더함
        }
    System.out.println(sum);                                                                                                               
    }
}
