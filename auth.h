#ifndef __AUTH__
#define __AUTH__

//online user
typedef struct user{
	unsigned char username[16];
	unsigned char ip[16];
	unsigned char mac[18];
	unsigned int uid;
	unsigned int magic;
	unsigned int rid;
	unsigned char token[64];
	int in_coming;
	int out_coming;
	//last time for user-keepalive
	int last_time;

	//point to next online user
	struct user *next;
}USER;

#endif
