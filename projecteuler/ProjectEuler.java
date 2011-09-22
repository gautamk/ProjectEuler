/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;
import java.util.HashSet;
import projecteuler.lib.Palindrome;
import projecteuler.solutions.*;
/**
 *
 * @author gautam
 */

public class ProjectEuler {

    /**
     * @param args the command line arguments
     */
   
    public static void main(String[] args) {
            HashSet<Integer> num_list = new HashSet<Integer>();
            for (int i =1;i<=20;i++){
                num_list.add(i);
            }
             System.out.println(
                        new Problem5(num_list)
                     );
    }
}
