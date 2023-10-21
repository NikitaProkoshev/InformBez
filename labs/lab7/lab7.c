#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void encrypt (char* plaintext, char* key) {
	int plaintextLength = strlen(plaintext);
	int keyLength = strlen(key);
	
	for (int i = 0; i < plaintextLength; i++) {
		char encryptedChar = plaintext[i] ^ key[i % keyLength];
		plaintext[i] = encryptedChar;
	}
}

void decrypt (char* ciphertext, char* key) {
	int ciphertextLength = strlen(ciphertext);
	int keyLength = strlen(key);
	
	for (int i = 0; i < ciphertextLength; i++) {
		char decryptedChar = ciphertext[i] ^ key[i % keyLength];
		ciphertext[i] = decryptedChar;
	}
}

char* generateKey(const char* word) {
	srand(time(NULL));
	char* key = (char*)malloc((strlen(word)+1) * sizeof(char));
	int i;
	
	for (i = 0; word[i] != '\0';i++) {
		int hexDigit = rand() & 16;
		sprintf(&key[i], "%X", hexDigit);
	}
	key[i] = '\0';
	
	return key;
}

int main() {
	char plaintext[] = "С Новым Годом, друзья!";
	char *key = generateKey(plaintext);
	printf("Plaintext: %s\n", plaintext);
	printf("Key: %s\n", key);
	
	encrypt(plaintext, key);
	printf("Encrypted Text: %s\n", plaintext);
	
	decrypt(plaintext, key);
	printf("Decrypted Text: %s\n", plaintext);
	
	free(key);
	
	return 0;
}
