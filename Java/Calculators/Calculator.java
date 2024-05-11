package Calculators;
public class Calculator {
    public int Sum (int a,int b){
        return a + b;}
    public int difference(int a,int b)
    {    return a - b;}
    public int product(int a,int b){
        return a * b;}
    public int division(int a,int b){
        return a / b;
    }
    public static void main(String[] args){
        Calculator c1=  new Calculator();
        System.out.println(c1.Sum(10, 10));
        System.out.println(c1.difference(10, 10));
        System.out.println(c1.product(10, 10));
        System.out.println(c1.division( 10,10));
    }
}