#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//					 Shift       Decimal  Binary    Hex   Octet
#define MASK_SWORD	 (1 << 0) // 2^0      00000001  0x01  01	
#define MASK_SHIELD	 (1 << 1) // 2^1      00000010  0x02  02	
#define MASK_POTION	 (1 << 2) // 2^2      00000100  0x04  04	
#define MASK_GUNTLET (1 << 3) // 2^3      00001000  0x08  010	
#define MASK_HAMMER  (1 << 4) // 2^4      00010000  0x10  020	
#define MASK_KEY	 (1 << 5) // 2^5      00100000  0x20  040	
#define MASK_RING	 (1 << 6) // 2^6      01000000  0x40  0100	
#define MASK_AMULET  (1 << 7) // 2^7      10000000  0x80  0200	

void char_binary(const char num);
void int_binary(const int num);

/*
	flag			01011010
	mask			00000011
	mask & flag ==  00000010
*/

int main()
{
	/*
	bool has_sword  = false;
	bool has_shield = false;
	bool has_potion = false;
	bool has_guntlet = false;
	bool has_hammer = false;
	bool has_key = false;
	bool has_ring = false;
	bool has_amulet = false;
	*/





	printf("\nTurning Bits On (Setting Bits)\n");





	printf("\nTurning Bits Off (Clearning Bits)\n");





	printf("\nToggling Bits\n");





	printf("\nChecking the Value of a Bit\n");





	printf("\nTrimming\n");





	return 0;
}

void char_binary(const char num)
{

}

void int_binary(const int num)
{

}