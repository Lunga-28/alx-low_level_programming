/**
 * flip_bits - ...............
 * ....................
 * @n: .............
 * @m: .............
 *
 * Return:.............................
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int bits = 0;

while (n || m)
{
  
	bits += (n & 1) != (m & 1); /****/
  
	n >>= 1; /*** Shift n to the right by 1 bit ***/
  
	m >>= 1; /*** Shift m to the right by 1 bit ***/
  
}

return (bits);
}
