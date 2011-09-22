/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler.solutions;

import java.util.Set;
import projecteuler.lib.Divisible;

/**
 *
 * @author gautam
 * 
 * 2520 is the smallest number that can be divided by each of the numbers 
 * from 1 to 10 without any remainder.
 * 
 * What is the smallest positive number that is evenly divisible by 
 * all of the numbers from 1 to 20?
 */
public class Problem5 extends projecteuler.Problem {

    Set<Integer> num_list;
    Integer solution ,i = 2520;
    public Problem5() {
        return;
    }
    public Problem5(Set<Integer> num_list){
        this.num_list = num_list;
        
        while (true)
        {
           i++;
           if(Divisible.isDivisibleBySet(num_list, i)){
               solution = i;
               return;
           }
        }
    }

    @Override
    public String toString() {
        return "The smallest Positive integer divisible by numbers from the given List is  "
                +solution
                ;
    }
    
    
}
