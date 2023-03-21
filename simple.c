#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/list.h>

// Prototipo de la de funcion de inicializacion
static int __init simple_init(void);

// Prototipo de la funcion de finalizacion
static void __exit simple_exit(void);

// Definicion de la funcion de inicializacion
static int __init simple_init(void)
{
    printk(KERN_INFO "Loading Module\nOperations");
    return 0;
}

// Definicion de la funcion de finalizacion
static void __exit simple_exit(void)
{
    print(KERN_INFO "Removing Module\nOperations");
}

// Escribiendo algunas instrucciones.
module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("Javier Valle");