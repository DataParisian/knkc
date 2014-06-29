/* KNKC chapter 14 exercise 14
 * Sundeep Kolli 17-june-2014
 * Program: ex14.c
 * Purpose: Show what the following program will look like after 
 * preprocessing. Some lines of the program may cause compilation 
 * errors; find all such errors.
*/
/* Uncomment for part a)

#define N = 10
#define INC(x) x+1
#define SUB (x,y) x-y
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR(x)*(x))
#define M1(x,y) x##y
#define M2(x,y) #x #y
 
int main(void)
{
	int a[N], i, j, k, m;

#ifdef N
	i = j;
#else
	j = i;
#endif

	i = 10 * INC(j);
	i = SUB(j, k);
	i = SQR(SQR(j));
	i = CUBE(j);
	i = M1(j, k);
	puts(M2(i, j));
	
#undef SQR
	i = SQR(j);
#define SQR
	i = SQR(j);

	return 0;
}

*/

/*
 * a) Program after preprocessing:



 
 
 
 
int main(void)
{
	int a[= 10], i, j, k, m;
	
		
	i = j;
	
	
	
	
	i = 10 * j+1;
	i = (x,y) x-y(j, k);
	i = (((j)*(j))*((j)*(j)));
	i = (((j)*(j))*(j));
	i = jk;
	puts("i" "j");
	
	
	i = SQR(j);
	
	i = (j);
	
	return 0;
} 


*/

#define N 10
#define INC(x) ((x)+1)
#define SUB(x,y) ((x)-(y))
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR(x)*(x))
#define M1(x,y) x##y
#define M2(x,y) #x #y
 
int main(void)
{
	int a[N], i, j, k, m;

#ifdef N
	i = j;
#else
	j = i;
#endif

	i = 10 * INC(j);
	i = SUB(j, k);
	i = SQR(SQR(j));
	i = CUBE(j);
	i = M1(j, k);
	puts(M2(i, j));
	
#undef SQR
	i = SQR(j);
#define SQR
	i = SQR(j);

	return 0;
}

/*
 * b) 
 
 The declaration a[ = N] will generate an error which is corrected by modifying
 the macro N to #define N 10
 
 The assignment i = (x,y) x-y(j, k); will generate an error which is corrected 
 by modifying the macro of SUB to SUB(x,y) ((x)-(y))
 
 The assignment i = jk; will generate an error since jk is an undeclared and 
 undefined variable.

*/
