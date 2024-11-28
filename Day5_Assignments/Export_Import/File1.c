#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

static int vdg_init(void)
{
    printk(KERN_INFO"This is the Module with 2 files...\n");
    return(0);
}

module_init(vdg_init);

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Jaswanth <kjaswanth1407@gmail.com>");
MODULE_DESCRIPTION("VDG: Two File Kernel Module");
MODULE_VERSION("1.0");
