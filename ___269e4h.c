#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

typedef char char40[40];

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e98h;
	extern __DWORD__ ___186658h[];
	extern __POINTER__ ___1a1e8ch;
	extern __BYTE__ ___1a1ed8h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___185c7ah[];
	extern __POINTER__ ___1a10b8h;
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___18e298h[];


void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);
char * itoa_watcom106(int value, char * buffer, int radix);
__DWORD__ ___251e8h_cdecl(const char *);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

static const char40 ___194170h[12][6] = {
	[0] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "This used to be a car, huh? Carry",
		[3] = "the rest of it in here & we'll see",
		[4] = "what can be done.",
		[5] = ""
	},
	[1] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Sorry, this vehicle is gone for",
		[3] = "good... Just kidding. Medic, fast!",
		[4] = "We've got a driver in shock.",
		[5] = ""
	},
	[2] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Don't tell me. You parked your car",
		[3] = "in a nuclear test zone? These",
		[4] = "holes need some gum, start chewing.",
		[5] = ""
	},
	[3] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Who helped you tow this piece of",
		[3] = "junk over the finish line? No",
		[4] = "sweat, this can be fixed.",
		[5] = ""
	},
	[4] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "So. Your car's sorry ass got blown",
		[3] = "clean off. Acme glue will fix your",
		[4] = "mishap-ridden day at the races.",
		[5] = ""
	},
	[5] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "As Mr. Nukem sometimes puts it:",
		[3] = "'Uh-oh, that's gotta hurt.' This",
		[4] = "calls for a screwdriver & aspirin.",
		[5] = ""
	},
	[6] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Your conveyance's methylated",
		[3] = "spirit receptacle has developed a",
		[4] = "chronic hernia, or something...",
		[5] = ""
	},
	[7] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "This is no time to rest in pieces.",
		[3] = "The race awaits! She'll be back on",
		[4] = "her wheels in no time.",
		[5] = ""
	},
	[8] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Take five, driver. A straight &",
		[3] = "simple sledgehammer job here.",
		[4] = "These percussions, gotta love 'em.",
		[5] = ""
	},
	[9] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Nothing a fresh paint-job can't",
		[3] = "fix. You'll be back on the track",
		[4] = "in a pit-stop minute.",
		[5] = ""
	},
	[10] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Got your wax coat scratched? Want",
		[3] = "to be your shining best? Hey, what-",
		[4] = "ever lights up your dashboard.",
		[5] = ""
	},
	[11] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Perfect is perfect. What ain't",
		[3] = "broken, can't be fixed. Come back",
		[4] = "after you've taken in some.",
		[5] = ""
	}
};

// SHOP REPAIR
void ___269e4h(void){

	int 	i, j;

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x28];
	racer_t * 	s_6c;


	s_6c = (racer_t *)___1a01e0h;

	j = -1;
	while(++j < 0x60){

		i = -1;
		while(++i < 0x60) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x279c8+0x280*j+i, read_b(___1a1e98h+0x6c00+0x60*j+i));
	}

	___259e0h_cdecl(0x148, 0x10d, D(___1a1ed8h), ___1a1e8ch, ___186658h);

	if((int)s_6c[D(___1a1ef8h)].damage >= 0xa){

		___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, "10", 0x27f1a-___251e8h_cdecl("10"));

		if(D(___185a14h_UseWeapons) == 0){

			eax = D(0x6e0*s_6c[D(___1a1ef8h)].car+___18e298h+0x6dc);
		}
		else {

			eax = D(0x6e0*s_6c[D(___1a1ef8h)].car+___18e298h+0x6dc);
			edx = eax;
			edx = (int)edx>>0x1f;
			eax = eax-edx;
			eax = (int)eax>>1;
		}
	}
	else {

		itoa_watcom106(s_6c[D(___1a1ef8h)].damage, esp, 0xa);
		___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, esp, 0x27f1a-___251e8h_cdecl(esp));

		if(D(___185a14h_UseWeapons) == 0){

			eax = D(0x6e0 * s_6c[D(___1a1ef8h)].car + ___18e298h + 0x6dc) / 0xa;
		}
		else {

			eax = D(0x6e0 * s_6c[D(___1a1ef8h)].car + ___18e298h + 0x6dc) / 0xa;
			edx = eax;
			edx = (int)edx>>0x1f;
			eax = eax-edx;
			eax = (int)eax>>1;
		}

		eax = eax*s_6c[D(___1a1ef8h)].damage;
	}

	itoa_watcom106(eax, esp, 0xa);
	strcat(strcpy(esp+0x14, "$"), esp);
	___12f60h_cdecl(esp+0x14, ___25180h_cdecl(esp+0x14)+0x346c8);
	
	esi = 0;
	if((int)s_6c[D(___1a1ef8h)].damage < 100) esi = 0x1;
	if((int)s_6c[D(___1a1ef8h)].damage < 90) esi = 0x2;
	if((int)s_6c[D(___1a1ef8h)].damage < 80) esi = 0x3;
	if((int)s_6c[D(___1a1ef8h)].damage < 70) esi = 0x4;
	if((int)s_6c[D(___1a1ef8h)].damage < 60) esi = 0x5;
	if((int)s_6c[D(___1a1ef8h)].damage < 50) esi = 0x6;
	if((int)s_6c[D(___1a1ef8h)].damage < 40) esi = 0x7;
	if((int)s_6c[D(___1a1ef8h)].damage < 30) esi = 0x8;
	if((int)s_6c[D(___1a1ef8h)].damage < 20) esi = 0x9;
	if((int)s_6c[D(___1a1ef8h)].damage < 10) esi = 0xa;
	if((int)s_6c[D(___1a1ef8h)].damage == 0) esi = 0xb;

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	VESA101_16X16_FORMAT_PRINT(___194170h[esi][0], 170, 124);
	VESA101_16X16_FORMAT_PRINT(___194170h[esi][1], 170, 140);
	VESA101_16X16_FORMAT_PRINT(___194170h[esi][2], 170, 156);
	VESA101_16X16_FORMAT_PRINT(___194170h[esi][3], 170, 172);
	VESA101_16X16_FORMAT_PRINT(___194170h[esi][4], 170, 188);
	VESA101_16X16_FORMAT_PRINT(___194170h[esi][5], 170, 204);
}
