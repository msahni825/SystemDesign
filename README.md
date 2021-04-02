# SystemDesign

URL Shortner
1.  It is given that URLs are stored in the database and every URL has an associated integer id.
2.  Simple soln: hashing drawback: collision
3.  Better soln: use the integer id stored in the database and convert the integer to a character string that is at most 6 characters long.
4. 	There are total 26(a-z) + 26(A-Z) + 10(0-9) = 62 possible characters. So the task is to convert a decimal number to base 62 number.
5. 	To get the original long URL, we need to get URL id in the database. The id can be obtained using base 62 to decimal conversion.
6.	The shortened URL is nearly one-third the size of the actual URL.	
