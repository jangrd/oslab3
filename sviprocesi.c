#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("OSLAB3 sviprocesi.c");
MODULE_AUTHOR("Jan Grdanjski");

static int __init sviprocesi_init(void) {
	printk(KERN_INFO "Loaded sviprocesi\n");
	struct task_struct* task;
	for_each_process(task) {
		printk(KERN_INFO "%s %d %d\n", task->comm, task->pid, task->prio);
	}
    return 0;
}

static void __exit sviprocesi_exit(void) {
    printk(KERN_INFO "Unloaded sviprocesi\n");
}

module_init(sviprocesi_init);
module_exit(sviprocesi_exit);
