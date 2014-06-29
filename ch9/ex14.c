/* KNKC chapter 9 exercise 14
 * Sundeep Kolli 21-feb-2014
 * Program: ex14.c
 * Purpose: Correct the error in the function in exercise 14.
*/

bool has zero(int a[], int n){
	int i;
	
	for (i = 0; i < n; i++){
		if (a[i] == 0){
			return true;
		}
	}
	
		return false;
			
	/*	else */             /* This returns either true or false after */
	/*		return false; */ /* checking only the 1st element           */
/*	}*/
}

