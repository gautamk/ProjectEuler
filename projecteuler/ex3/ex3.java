class ex3{
	public static long LargestPrimeFactor(long number) {
		long n = number, factor = 1 , i;
		for (i = 2; i <= n / i; i++) {
			while (n % i == 0) {
				factor = i>factor?i:factor;
				n /= i;
			}
		}
		factor = n>factor?n:factor;
		return factor;
	}
	public static void main(String [] args){
		System.out.println(LargestPrimeFactor(600851475143L));
	}
}