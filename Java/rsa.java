// Programa Java para Implementar o Algoritmo RSA
import java.math.*;
import java.util.*;

public class Main {
	public static void main(String args[])
	{
		int p, q, n, z, d = 0, e, i;

		// O nÃºmero a ser criptografado e descriptografado
		int msg = 10;
		double c;
		BigInteger msgback;

		// 1Âº nÃºmero primo p
		p = 7;

		// 2Âº nÃºmero primo q
		q = 19;
		n = p * q;
		z = (p - 1) * (q - 1);
		System.out.println("o valor de z = " + z);

		for (e = 2; e < z; e++) {

			// e Ã© para expoente de chave pÃºblica
			if (gcd(e, z) == 1) {
				break;
			}
		}
		System.out.println("o valor de e = " + e);
		for (i = 0; i <= 9; i++) {
			int x = 1 + (i * z);

			// d Ã© para expoente de chave privada
			if (x % e == 0) {
				d = x / e;
				break;
			}
		}
		System.out.println("o valor de d = " + d);
		c = (Math.pow(msg, e)) % n;
		System.out.println("A mensagem criptografada Ã© : " + c);

		// convertendo o valor int de n para BigInteger
		BigInteger N = BigInteger.valueOf(n);

		// convertendo o valor float de c para BigInteger
		BigInteger C = BigDecimal.valueOf(c).toBigInteger();
		msgback = (C.pow(d)).mod(N);
		System.out.println("A mensagem descriptografada Ã©: "
						+ msgback);
	}

	static int gcd(int e, int z)
	{
		if (e == 0)
			return z;
		else
			return gcd(z % e, e);
	}
}
