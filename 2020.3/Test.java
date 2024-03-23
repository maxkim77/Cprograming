public class Test { // Test 클래스 선언
    public static void main(String []args){ // main 메소드 선언
        int i = 0;
        int sum = 0;
        while(i < 10) {
            i++; // i를 1씩 증가시킴
            if(i%2==1) // 홀수인지
            continue;
            // 홀수이면 continue로 아래 코드를 실행하지 않고 다음 반복으로 넘어감
        sum += i; // 짝수일 때만 더함
        }
    System.out.println(sum);                                                                                                               
    }
}
