// stable matching project 159.333 
#include <iostream> 
#include <string.h> 
#include <stdio.h> 
using namespace std; 
  
// Number of Men or Women 
#define N  6 
  
// This function id to check if w prefers man m1 over man m2 
bool checkWPrefersM1OrM2(int prefer[2*N][N], int w, int m1, int m2) 
{ 
	// Check if w prefers m1 over m2
	for (int i = 0; i < N; i++) 
	{ 
		if (prefer[w][i] == m2) 
			return true; 
		if (prefer[w][i] == m1) 
			return false; 
	} 
} 
  

int main() 
{ 

  
	return 0; 
} 