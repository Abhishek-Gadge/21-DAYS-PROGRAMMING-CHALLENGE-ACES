//  reverse that number and print it

import java.util.*;
import java.io.*;

public class Reverse {
  public static void main(String args[]) throws IOException {
    
    Scanner sc= new Scanner(System.in);
    int num=sc.nextInt();
    int reversed=0;
    for(;num!=0;num/=10)
    {
      int digit=num%10;
      reversed=reversed*10+digit;
    }
    System.out.println(reversed);
  }
}