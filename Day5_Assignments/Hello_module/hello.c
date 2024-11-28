#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>

static int vdg_init(void)
{
    printk(KERN_INFO "Hello world...\n");
    return 0;
}

static void vdg_exit(void)
{
    printk(KERN_INFO "Bye world...\n");
}

module_init(vdg_init);
module_exit(vdg_exit);

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Jaswanth <kjaswanth1407@gmail.com>");
MODULE_DESCRIPTION("VDG: First Kernel Module");
