void func_0016deb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x0016deb0: lw $v0, 0x10($a0)
    *(uint32_t*)(a1) = v0;                                      // 0x0016deb4: sw $v0, 0($a1)
    v1 = *(int32_t*)((a0) + 0x1c);                              // 0x0016deb8: lw $v1, 0x1c($a0)
    *(uint32_t*)((a1) + 4) = v1;                                // 0x0016debc: sw $v1, 4($a1)
    v0 = *(int32_t*)((a0) + 0x20);                              // 0x0016dec0: lw $v0, 0x20($a0)
    *(uint32_t*)((a1) + 8) = v0;                                // 0x0016dec4: sw $v0, 8($a1)
    v1 = *(int32_t*)((a0) + 0x24);                              // 0x0016dec8: lw $v1, 0x24($a0)
    *(uint32_t*)((a1) + 0xc) = v1;                              // 0x0016decc: sw $v1, 0xc($a1)
    v0 = *(int32_t*)((a0) + 0x28);                              // 0x0016ded0: lw $v0, 0x28($a0)
    *(uint32_t*)((a1) + 0x10) = v0;                             // 0x0016ded4: sw $v0, 0x10($a1)
    v1 = *(int32_t*)((a0) + 0x2c);                              // 0x0016ded8: lw $v1, 0x2c($a0)
    *(uint32_t*)((a1) + 0x14) = v1;                             // 0x0016dedc: sw $v1, 0x14($a1)
    v0 = *(int32_t*)((a0) + 0x14);                              // 0x0016dee0: lw $v0, 0x14($a0)
    return;                                                     // 0x0016dee4: jr $ra
    *(uint32_t*)((a1) + 0x18) = v0;                             // 0x0016dee8: sw $v0, 0x18($a1)
}