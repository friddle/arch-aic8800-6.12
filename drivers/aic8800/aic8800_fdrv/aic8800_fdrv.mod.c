#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};


MODULE_INFO(depends, "cfg80211,aic_load_fw");

MODULE_ALIAS("usb:vA69Cp8801d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:vA69Cp8D81d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:vA69Cp88DCd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:vA69Cp88DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v368Bp88DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2604p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2604p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "82C5D9CD961C9711DD58EE7");
