#include <common.h>
#include <asm/global_data.h>

DECLARE_GLOBAL_DATA_PTR;

int board_init(void)
{
	return 0;
}

int board_late_init(void)
{
	return 0;
}

void *board_fdt_blob_setup(int *err)
{
	void *fdt_blob = (void *)0x800030000;

    *err = 0;
    if (fdt_magic(fdt_blob) == FDT_MAGIC)
		return fdt_blob;

    *err = -EINVAL;
    return NULL;
}
