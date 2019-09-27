#include "dna.h"
#include <cstring>

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string & dna)
{
	double dna_length = dna.size();
	double gc_count = 0;

	for (int i = 0; i < dna_length; i++)
	{
		if (dna[i] == 'G' || dna[i] == 'C')
		{
			gc_count += 1;
		}
	}

	return gc_count / dna_length;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
	string dna_reversed = "";
	for (int i = dna.size() - 1; i >= 0; i--)
	{
		dna_reversed += dna[i];
	}
	return dna_reversed;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
	string dna_complement = get_reverse_string(dna);

	for (int i = 0; i < dna_complement.size(); i++)
	{
		switch (dna_complement[i])
		{
		case 'A':
			dna_complement[i] = 'T';
			break;

		case 'T':
			dna_complement[i] = 'A';
			break;

		case 'C':
			dna_complement[i] = 'G';
			break;

		case 'G':
			dna_complement[i] = 'C';
			break;
		}
	}

	return dna_complement;
}
