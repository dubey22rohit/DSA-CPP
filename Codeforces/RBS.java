import java.util.Scanner;

class RBS {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while (t!=0) {
            String str = s.next();
            int len = str.length();
            if (str.charAt(0) == ')' || str.charAt(len - 1) == '(') {
                System.out.println("NO");
            } else if (len % 2 == 0) {
                System.out.println("YES");
            } else if (len % 2 != 0) {
                System.out.println("NO");
            } else {
                System.out.println("NO");
            }
            t--;
        }

    }
}