void func_00177358() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 8;                                                     // 0x00177358: addiu $v0, $zero, 8
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x0017735c: sw $zero, 4($a0)
    *(uint32_t*)(a0) = 0;                                       // 0x00177360: sw $zero, 0($a0)
    v1 = 2;                                                     // 0x00177364: addiu $v1, $zero, 2
    *(uint32_t*)((a0) + 0xc) = a1;                              // 0x00177368: sw $a1, 0xc($a0)
    a1 = 8;                                                     // 0x0017736c: addiu $a1, $zero, 8
    *(uint32_t*)((a0) + 0x10) = v0;                             // 0x00177370: sw $v0, 0x10($a0)
    v0 = a0 + 0x1c;                                             // 0x00177374: addiu $v0, $a0, 0x1c
label_0x177378:
    v1 = v1 + -1;                                               // 0x00177378: addiu $v1, $v1, -1
    *(uint32_t*)(v0) = a1;                                      // 0x0017737c: sw $a1, 0($v0)
    /* nop */                                                   // 0x00177380: nop 
    /* nop */                                                   // 0x00177384: nop 
    /* nop */                                                   // 0x00177388: nop 
    if (v1 >= 0) goto label_0x177378;                           // 0x0017738c: bgez $v1, 0x177378
    v0 = v0 + -4;                                               // 0x00177390: addiu $v0, $v0, -4
    v0 = -1;                                                    // 0x00177394: addiu $v0, $zero, -1
    return;                                                     // 0x00177398: jr $ra
    *(uint32_t*)((a0) + 0x20) = v0;                             // 0x0017739c: sw $v0, 0x20($a0)
}