package me.terato;

public class Main {

    public native String getOsName();

    public native Operation operationTwoNumbers(float a, float b);

    static {
        System.load("/Users/floydz96/Developer/jni-test/build/resources/main/libfirst.so");
    }

    public static void main(String[] args) {
        System.out.println("Hello world!");

        Main main = new Main();

        System.out.println(main.getOsName());

        System.out.println(main.operationTwoNumbers(2, 5));
    }
}