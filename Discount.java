import java.util.*;
import java.io.*;

public class Discount {
  public static void main(String args[]) throws IOException {
    
    //write your code here
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    for(int i=0;i<n;i++)
    {
      int q=sc.nextInt();
      float p=sc.nextFloat();
      float total_price;
      total_price=p*q;
      if(q>100)
      {
        float discount,price;
        discount=(20*p*q)/100;
        price=(total_price)-discount;
        System.out.println(price);
      }
      else
      {
        System.out.println(total_price);
      }
  }}
}