#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("OSLAB3 mojmodul.c");
MODULE_AUTHOR("Jan Grdanjski");

static int __init mojmodul_init(void) {
    printk(KERN_INFO "Starting mojmodul_init()\n");
    printk(KERN_INFO "Jiffies: %lu\n", jiffies);
    printk(KERN_INFO "Seconds: %lu\n", jiffies / HZ);   
    printk(KERN_INFO "Ending mojmodul_init()\n");
    
    return 0;
}

static void __exit mojmodul_exit(void) {
    printk(KERN_INFO "Starting mojmodul_exit()\n");
    printk(KERN_INFO "Jiffies: %lu\n", jiffies);
    printk(KERN_INFO "Seconds: %lu\n", jiffies / HZ);   
    printk(KERN_INFO "Ending mojmodul_exit()\n");
}

module_init(mojmodul_init);
module_exit(mojmodul_exit);
