#ifndef MODEL_NAME
	#include "../model/xf1.h"
#endif

#include <string.h>
#include <stdint.h>

#include "fujifilm.h"

void entry() {
	uintptr_t *tempAddr = (uintptr_t *)DUMPER_TEMP_ADDR;

	int a = 0;
	fuji_malloc(10, &a, 0xffffffff);

	tempAddr[0] = a;
}
