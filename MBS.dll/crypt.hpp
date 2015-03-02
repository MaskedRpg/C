#define MBS_API extern "C" __declspec (dllexport)

MBS_API void Encrypt(const int*, const int, const long, int*);
MBS_API void Decrypt(const int*, const int, const long, int*);
