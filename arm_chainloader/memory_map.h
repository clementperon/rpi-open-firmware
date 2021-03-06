/*
 [ CODE ][ STACK ][    HEAP    ]
*/

#pragma once

#define MEM_CODE_END 0x20000

#define MEM_STACK_SIZE 0x4000
#define MEM_STACK_END (MEM_CODE_END + MEM_STACK_SIZE)

#define MEM_HEAP_START MEM_STACK_END
#define MEM_HEAP_SIZE 0x100000
#define MEM_HEAP_END (MEM_HEAP_START + MEM_HEAP_SIZE)

#define MEM_USABLE_START MEM_HEAP_END