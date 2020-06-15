import java.io.*;
import java.util.*;

public class Solution {
    public static int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        int x = S.nextInt(), y = S.nextInt();
        S.close();
        System.out.println(gcd(x, y));

        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
    }
}
