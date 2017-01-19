package _1A;

import java.util.Scanner;

/**
 * Created by Johan on 1/19/2017.
 */
public class Main {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        long n,m,a;
        n = scanner.nextLong();
        m = scanner.nextLong();
        a = scanner.nextLong();
        long vertical_stones = n/a;
        if (n%a>0){vertical_stones++;}
        long horizontal_stones = m/a;
        if(m%a>0){horizontal_stones++;}
        System.out.println(vertical_stones*horizontal_stones);
    }
}
