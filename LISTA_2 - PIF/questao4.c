int a = 1, b = 2, c = 3, d = 4;
a += b + c; // Valor final de a = ?
b *= c = d + 2; // Valores finais de b e c = ?
d %= a + a + a; // Valor final de d = ?
d -= c -= b -= a; // Valor final de d, c e b = ?
a += b += c += 7; // Valor final de a, b e c = ?

Respostas:

1. 
a = 1 + 2 + 3 a = 6

2. 
c = 4 + 2 c = 6

b = 2 * 6 b = 12

3. 
d = 4 % (6 + 6 + 6) d = 4 % 18 d = 4

4. 
b = 12 - 6 b = 6

c = 6 - 6 c = 0

d = 4 - 0 d = 4

5. 
c = 0 + 7 c = 7

b = 6 + 7 b = 13

a = 6 + 13 a = 19

valores finais: 
a = 19 b = 13 c = 7 d = 4