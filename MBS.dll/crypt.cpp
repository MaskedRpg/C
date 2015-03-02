#include "crypt.hpp"

using namespace std;

MBS_API void Encrypt(const int* text, const int key, const long tsize, int* buffer) {

	for (int i = 0; i < tsize; i++) {
		buffer[i] = text[i] + key;
	}
}

MBS_API void Decrypt(const int* text, const int key, const long tsize, int* buffer) {

	for (int i = 0; i < tsize; i++) {
		buffer[i] = text[i] - key;
	}
}
