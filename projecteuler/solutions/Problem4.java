/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler.solutions;

import projecteuler.lib.Palindrome;

/**
 *
 * A palindromic number reads the same both ways. 
 * The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 * @author gautam
 */
public class Problem4 extends projecteuler.Problem {
    int LargestPalindrome ,a = 999 ,b;

    public Problem4() {
        a = 999;
        while (a >= 100){
             b = 999;
            while (b >= a){
                if (a*b <= LargestPalindrome)
                    break; //Since a*b is always going to be too small
                if (Palindrome.isPalindrome(a * b))
                    LargestPalindrome = a*b;
                b --;
           }
        a--;
       }
    }

    @Override
    public String toString() {
        return "The Largest Palindrome of a 3 digit number is "
                +LargestPalindrome
                +"="
                +a+"*"+b
                ;
    }
    
    
}
