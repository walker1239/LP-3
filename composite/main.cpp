#include <iostream>
#include "file.h"
#include "directorio.h"
#include <string>
using namespace std;
int main(){

	//File a("hola");
	//Directorio dir("fgf");
	// std::string s = "a string";
   // std::cout << s << std::endl;

	Directorio directo[4];
	File files[6];
/*	for(int i=0;i<4;i++){
		files[i].set_nombre("hola");
		directo[i].add(&files[i]);
		directo[i].add(&files[i+1]);
		directo[i].add(&directo[i+1]);

	}
*/	files[0].set_nombre("file0");
	files[1].set_nombre("file 1");
	files[2].set_nombre("file 2");
	files[3].set_nombre("file 3");
	files[4].set_nombre("file 4");
	files[5].set_nombre("file 5");


	directo[0].set_nombre("dire 0");
	directo[1].set_nombre("dir 1");
	directo[2].set_nombre("dir 2");
	directo[3].set_nombre("dir 3");






	directo[0].add(&files[0]);
	directo[0].add(&files[1]);
	directo[0].add(&directo[1]);

	directo[1].add(&files[2]);
	directo[1].add(&directo[2]);
	directo[1].add(&directo[3]);

	directo[3].add(&files[3]);
	directo[3].add(&files[4]);
	
	directo[0].dibujararbol();





	return 0;
}