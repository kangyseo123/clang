#include<stdio.h>

int main() {

	char word[4][20] = {
		"korean",
		"japanese",
		"chinese",
		"english"
	};

	char(*p_word)[20];
	p_word = &word[0];
	for (int i = 0; i < 4; i++) {
		printf("%s\n", p_word[i]);
	}
	
	
	return 0;
}