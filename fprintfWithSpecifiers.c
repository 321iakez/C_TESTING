#include <stdio.h>

int main(){
	FILE * file_pt = fopen("output.txt", "w");
	char c = 'A';
	int i = 15;
	
	// first test fprint f for char type
	fprintf(file_pt, "%c", c);
	fprintf(file_pt, "%d", c);
	
	// test fprintf for int type
	//fprintf(file_pt, "%c", i);
	fprintf(file_pt, "%d\n", i);
	
	//what is different for fwrite?
	
	fwrite(&i, sizeof(int), 1, file_pt);
	fwrite(&c, sizeof(char), 1, file_pt);
}
	
