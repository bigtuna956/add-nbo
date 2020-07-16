#include <stdint.h>
#include <stdio.h>
#include <arpa/inet.h>

int main(int argc, char* argv[]){
	
	FILE *f1, *f2;
	uint32_t r1, r2;
	uint32_t sum;

	f1 = fopen(argv[1], "rb");
	f2 = fopen(argv[2], "rb");

	fread(&r1, 4, 1, f1);
	uint32_t first = ntohl(r1);

	fread(&r2, 4, 1, f2);
	uint32_t second = ntohl(r2);

	printf("argv[1] result = : %x\n", first);
	printf("argv[2] result = : %x\n", second);

	sum = first + second;
	printf("argv[1] + argv[2] = %x\n", sum);
	return 0;
}
