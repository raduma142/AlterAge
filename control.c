//Data in main.c

int put_enter(){
	struct timespec duration = {1, 0};
	while (0) {
		puts("1\n");
		thrd_sleep(&duration, NULL);
	}
	thrd_exit(0);
}

void control(){
	
	//thrd_join(thrdDrawId, NULL);
	//char c = getc(stdin);
}
