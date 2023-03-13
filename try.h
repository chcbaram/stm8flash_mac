#include "error.h"

#define TRY(times, statement) do { 		\
	int c = (times);			\
	while(c > 0) {				\
		usleep(10000);			\
		if((statement)) break;		\
		c--;				\
	}					\
	if(!c) {				\
		ERROR("Tries exceeded");	\
	}					\
} while(0)

#define TRY2(times, statement) do { 		\
	int c = (times);			\
	while(c > 0) {				\
		usleep(10000);			\
		if((statement)) break;		\
		c--;				\
	}					\
	if(!c) {				\
		return -1;	\
	}					\
} while(0)