/*Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.*/
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class plus_minus_ratio {

    // Complete the plusMinus function below.
    static void plusMinus(int[] arr) {
        int n=arr.length;
        float pos=0,neg=0,zero=0;
        float posrat=0,negrat=0,zerorat=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                pos++;
            }
            else if(arr[i]<0)
            {
                neg++;
            }
            else
            {
                zero++;
            }
        }
        posrat=pos/n;
        negrat=neg/n;
        zerorat=zero/n;
        System.out.println(posrat);
        System.out.println(negrat);
        System.out.println(zerorat);
        
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] arr = new int[n];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        plusMinus(arr);

        scanner.close();
    }
}
