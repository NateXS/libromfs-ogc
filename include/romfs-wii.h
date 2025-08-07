#ifndef _ROMFS_WII_H
#define _ROMFS_WII_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/*
	romfsInit: mount romfs
	returns 0 when successful or a negative value for errors
*/
int32_t romfsInit(void);

/*
	romfsExit: unmount romfs
	returns 0 when successful or a negative value for errors
*/
int32_t romfsExit(void);


#ifdef __cplusplus
}
#endif

#endif
