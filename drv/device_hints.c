
/* Device hints internal representation.
 *
 * WARNING: This file is autogenerated and should NOT be modified directly.
 * Please refer to `device_hints.dts` file in case you would like to change
 * any of the values
 * */
#include <stdint.h>

typedef struct {
    char* path;
    uint64_t iomem[32];
    uint64_t ioport[32];
    uint32_t irq;
} devhint_t;

devhint_t hints[] = {
{ 	.iomem = {1016, 1023, 760, 767},
	.irq = 0x4,
	.path = "/rootdev/pci@0/isab@0/isa@0/uart@0"
},
{ 	.ioport = {96, 96, 100, 100},
	.iomem = {760, 767},
	.irq = 0x3,
	.path = "/rootdev/pci@0/isab@0/isa@0/uart@1"
},

};
