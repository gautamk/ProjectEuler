/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler.lib;

/**
 *
 * @author gautam
 * A string based Palindrome character
 */
public class Palindrome {
    
    public static boolean isPalindrome(Integer num){
       return getReverse(num).equals(num);
        
    }
    
    public static boolean isPalindrome(Long num){
       return getReverse(num).equals(num);
        
    }
    
    public static boolean isPalindrome(String palindrome){ 
        return getReverse(palindrome).equals(palindrome);
    }
    
    
    public static Long getReverse(Long num){
        Long revnum = 0L;
        while (num != 0) {
          revnum = revnum * 10 + (num % 10);
          num /= 10;
        }
        return revnum;
    }
    
    public static Integer getReverse(Integer num){
        Integer revnum = 0;
        while (num != 0) {
          revnum = revnum * 10 + (num % 10);
          num /= 10;
        }
        return revnum;      
    }
    
    public static String getReverse(String palindrome){
        int len = palindrome.length();
        char[] tempCharArray = palindrome.toCharArray();
        char[] charArray = new char[len];
         
        // reverse array of chars
        for (int j = 0; j < len; j++) {
            charArray[j] = tempCharArray[len - 1 - j];
        }
        return new String(charArray);
        
    }
    
}
