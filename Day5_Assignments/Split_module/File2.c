#include<linux/init.h>
#include<linux/module.h>

static void vdg_exit(void)
{
    printk(KERN_INFO"Exiting From the module with 2 Files...\n");
}

module_exit(vdg_exit);

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Jaswanth <kjaswanth1407@gmail.com>");
MODULE_DESCRIPTION("VDG: Two File Kernel Module");
MODULE_VERSION("1.0");
