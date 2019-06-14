#ifndef __F4SE_VERSION_H__
#define __F4SE_VERSION_H__

// these have to be macros so they can be used in the .rc
#define F4SE_VERSION_INTEGER		0
#define F4SE_VERSION_INTEGER_MINOR	0
#define F4SE_VERSION_INTEGER_BETA	1
#define F4SE_VERSION_VERSTRING		"0, 0, 0, 1"
#define F4SE_VERSION_PADDEDSTRING	"0018"
#define F4SE_VERSION_RELEASEIDX		1

#define MAKE_EXE_VERSION_EX(major, minor, build, sub)	((((major) & 0xFF) << 24) | (((minor) & 0xFF) << 16) | (((build) & 0xFFF) << 4) | ((sub) & 0xF))
#define MAKE_EXE_VERSION(major, minor, build)			MAKE_EXE_VERSION_EX(major, minor, build, 0)

#define GET_EXE_VERSION_MAJOR(a)	(((a) & 0xFF000000) >> 24)
#define GET_EXE_VERSION_MINOR(a)	(((a) & 0x00FF0000) >> 16)
#define GET_EXE_VERSION_BUILD(a)	(((a) & 0x0000FFF0) >> 4)
#define GET_EXE_VERSION_SUB(a)		(((a) & 0x0000000F) >> 0)

#define RUNTIME_VERSION_1_2_72	MAKE_EXE_VERSION(1, 2, 72)	// 0x01020480	first version

#define PACKED_F4SE_VERSION		MAKE_EXE_VERSION(F4SE_VERSION_INTEGER, F4SE_VERSION_INTEGER_MINOR, F4SE_VERSION_INTEGER_BETA)

// information about the state of the game at the time of release
#define F4SE_TARGETING_BETA_VERSION	0
#define CURRENT_RELEASE_RUNTIME		RUNTIME_VERSION_1_2_72
#define CURRENT_RELEASE_F4SE_STR	"0.0.1"

#endif /* __F4SE_VERSION_H__ */
