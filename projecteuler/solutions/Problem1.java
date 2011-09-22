/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler.solutions;

import projecteuler.Problem;
import projecteuler.arithmatic;

/**
 *
 * @author gautam
 */
public class Problem1 extends Problem {
     /**
     * @url http://projecteuler.net/index.php?section=problems&id=1
     * @description:
     * 
     * If we list all the natural numbers below 10 that are multiples of 3 or 5, 
     * we get 3, 5, 6 and 9. 
     * The sum of these multiples is 23.
     * Find the sum of all the multiples of 3 or 5 below 1000.
     * 
     * @param args the command line arguments
     */
    Integer sum = new Integer(0);
    public Problem1() {
       
       for (int i = 0 ; i < 1000 ; i++)
       {
           if( arithmatic.is_multiple(i, 3) || arithmatic.is_multiple(i, 5) )
               sum += i;
               
       }
       
    }

    @Override
    public String toString() {
        return "The sum is :"+ sum;
    }
}
