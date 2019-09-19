//undefined behavior number 58
#include <stdio.h>
#include <string.h>

struct Movie {
   char  title[50];
   char  director[50];
   int   rating; //between 1 and 10
};

struct foo {
   int : 12;
};

int main(){
	struct Movie mov1;   
	
	strcpy( mov1.title, "Godfather");
	strcpy( mov1.director, "Kubrick");
	mov1.rating = 10; 
	
	struct foo trial;
	
	
	return 0;
}
