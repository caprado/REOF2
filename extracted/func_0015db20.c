void func_0015db20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a1) + 0x44);                              // 0x0015db20: lw $v0, 0x44($a1)
    a0 = a0 + 0x88;                                             // 0x0015db24: addiu $a0, $a0, 0x88
    v1 = *(int32_t*)((a1) + 0x50);                              // 0x0015db28: lw $v1, 0x50($a1)
    *(uint32_t*)((a0) + 8) = v0;                                // 0x0015db2c: sw $v0, 8($a0)
    *(uint32_t*)((a0) + 0x14) = v1;                             // 0x0015db30: sw $v1, 0x14($a0)
    v0 = *(int32_t*)((a1) + 0x48);                              // 0x0015db34: lw $v0, 0x48($a1)
    a3 = *(int32_t*)((a1) + 0x54);                              // 0x0015db38: lw $a3, 0x54($a1)
    *(uint32_t*)((a0) + 0xc) = v0;                              // 0x0015db3c: sw $v0, 0xc($a0)
    v1 = *(int32_t*)((a1) + 0x3c);                              // 0x0015db40: lw $v1, 0x3c($a1)
    a2 = *(int32_t*)((a1) + 0x4c);                              // 0x0015db44: lw $a2, 0x4c($a1)
    v0 = *(int32_t*)((a1) + 0x40);                              // 0x0015db48: lw $v0, 0x40($a1)
    *(uint32_t*)(a0) = v1;                                      // 0x0015db4c: sw $v1, 0($a0)
    *(uint32_t*)((a0) + 4) = v0;                                // 0x0015db50: sw $v0, 4($a0)
    *(uint32_t*)((a0) + 0x10) = a2;                             // 0x0015db54: sw $a2, 0x10($a0)
    *(uint32_t*)((a0) + 0x18) = a3;                             // 0x0015db58: sw $a3, 0x18($a0)
    return;                                                     // 0x0015db5c: jr $ra
    *(uint32_t*)((a0) + 0x1c) = 0;                              // 0x0015db60: sw $zero, 0x1c($a0)
}