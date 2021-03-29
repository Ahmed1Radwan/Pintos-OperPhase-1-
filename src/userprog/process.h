#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"

struct process_file{

	int fd;
	struct file *file;
	struct list_elem elem;
};

tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (void);



int process_add_file(struct file *f,struct thread *t);
struct file* process_get_File(int pid, struct threads *t);
void remove_child_process(struct child_process *cp);
void remove_all_children(struct thread *t);

#endif /* userprog/process.h */
