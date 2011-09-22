/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler.lib;

import java.util.Set;

/**
 *
 * @author gautam
 */
public class Divisible {
    
    
    /**
     * 
     * @param num_list
     * @param num
     * @return Whether a number is divisible by a set of numbers.
     */
    public static boolean isDivisibleBySet(Set<Integer> num_list, Integer num){
        for(Integer i : num_list){
            if(i % num != 0)
                return false;
        }
        return true;
    }
    
}
