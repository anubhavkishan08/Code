package com.company;

public class Main {

    public static void main(String[] args) {
	// write your code here
        int [] myArray =new int[20];
        for(int i=0;i< myArray.length;i++)
        {
            myArray[i]=(i+1)*10;
        }
        for(int i=0;i< myArray.length;i++)
            System.out.println("Element at" + i + " = " +myArray[i] );
        
    }
}
