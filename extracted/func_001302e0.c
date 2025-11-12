void func_001302e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x001302e0: lw $v0, 0x10($a0)
    *(uint32_t*)((a0) + 0x30) = 0;                              // 0x001302e4: sw $zero, 0x30($a0)
    if (v0 != 0) goto label_0x1302f8;                           // 0x001302e8: bnez $v0, 0x1302f8
    *(uint8_t*)((a0) + 3) = 0;                                  // 0x001302ec: sb $zero, 3($a0)
    goto label_0x1302fc;                                        // 0x001302f0: b 0x1302fc
    v0 = 3;                                                     // 0x001302f4: addiu $v0, $zero, 3
label_0x1302f8:
    v0 = 2;                                                     // 0x001302f8: addiu $v0, $zero, 2
label_0x1302fc:
    *(uint8_t*)((a0) + 1) = v0;                                 // 0x001302fc: sb $v0, 1($a0)
    v0 = 1;                                                     // 0x00130300: addiu $v0, $zero, 1
    *(uint8_t*)((a0) + 2) = 0;                                  // 0x00130304: sb $zero, 2($a0)
    *(uint32_t*)((a0) + 0x20) = 0;                              // 0x00130308: sw $zero, 0x20($a0)
    *(uint32_t*)((a0) + 0x24) = 0;                              // 0x0013030c: sw $zero, 0x24($a0)
    return;                                                     // 0x00130310: jr $ra
    *(uint8_t*)((a0) + 0x43) = v0;                              // 0x00130314: sb $v0, 0x43($a0)
}