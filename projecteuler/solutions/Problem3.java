/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler.solutions;

import java.util.ArrayList;
import java.util.List;
import projecteuler.lib.PrimeFactorsEffective;

/**
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 * @author gautam
 * @see ProjectEuler
 */
public class Problem3 extends projecteuler.Problem {

    Long number , LargestFactor ;
    List<Long> factors = new ArrayList<Long>();
    

    public Problem3(Long number) {
        this.number = number;
        factors = PrimeFactorsEffective.primeFactors(number);
        LargestFactor = factors.get(factors.size() - 1 );
    }   
    
    @Override
    public String toString() {
        return "The largest PrimeFactor of "
                +number
                +" is "
                +LargestFactor
                ;
    }
    
    
}
