#include<stdio.h>
#include<stdlib.h>
#include"auth.h"

USER * online_head = NULL;

int add_online_user(USER user)
{
	USER user_node = (USER *)malloc(sizeof(USER))
	*user_node = user;
	node->next = NULL;

	if(!online_head){
		online_head = node;
		return online_head;
	}
}
