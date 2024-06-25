#include <linux/input/tp_common.h>

struct kobject *touchpanel_kobj;

int tp_common_set_double_tap_ops(struct tp_common_ops *ops)
{
    static struct kobj_attribute kattr =
    __ATTR(double_tap, (S_IWUSR | S_IRUGO), NULL, NULL);
    kattr.show = ops->show;
    kattr.store = ops->store;
    return sysfs_create_file(touchpanel_kobj, &kattr.attr);
}

static int __init tp_common_init(void)
{
	touchpanel_kobj = kobject_create_and_add("touchpanel", NULL);
	if (!touchpanel_kobj)
		return -ENOMEM;

	return 0;
}

core_initcall(tp_common_init);
