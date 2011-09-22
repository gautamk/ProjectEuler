/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler.lib;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * 
 * @author Lars Vogel
 * @see http://www.vogella.de/articles/JavaAlgorithmsPrimeFactorization/article.html#sourcecode
 * 
 * This class finds the prime factors of a given number and returns a list of
 * the prime factors.
 * 
 */
public class PrimeFactorsEffective {
    	public static List<Long> primeFactors(long numbers) {
		long n = numbers; 
		List<Long> factors = new ArrayList<Long>();
		for (long i = 2; i <= n / i; i++) {
			while (n % i == 0) {
				factors.add(i);
				n /= i;
			}
		}
		if (n > 1) {
			factors.add(n);
		}
		return factors;
	}

    
}
