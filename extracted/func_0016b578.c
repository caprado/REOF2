void func_0016b578() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x7fff << 16;                                          // 0x0016b578: lui $v0, 0x7fff
    v1 = -1;                                                    // 0x0016b57c: addiu $v1, $zero, -1
    v0 = v0 | 0xffff;                                           // 0x0016b580: ori $v0, $v0, 0xffff
    *(uint32_t*)((a0) + 0x2c) = v1;                             // 0x0016b584: sw $v1, 0x2c($a0)
    *(uint32_t*)((a0) + 0x1c) = v0;                             // 0x0016b588: sw $v0, 0x1c($a0)
    a2 = 0x43;                                                  // 0x0016b58c: addiu $a2, $zero, 0x43
    *(uint32_t*)(a0) = 0;                                       // 0x0016b590: sw $zero, 0($a0)
    a1 = a0 + 0x140;                                            // 0x0016b594: addiu $a1, $a0, 0x140
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x0016b598: sw $zero, 4($a0)
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x0016b59c: sw $zero, 8($a0)
    *(uint32_t*)((a0) + 0xc) = v0;                              // 0x0016b5a0: sw $v0, 0xc($a0)
    *(uint32_t*)((a0) + 0x10) = v0;                             // 0x0016b5a4: sw $v0, 0x10($a0)
    *(uint32_t*)((a0) + 0x14) = 0;                              // 0x0016b5a8: sw $zero, 0x14($a0)
    *(uint32_t*)((a0) + 0x18) = v0;                             // 0x0016b5ac: sw $v0, 0x18($a0)
    *(uint32_t*)((a0) + 0x20) = v1;                             // 0x0016b5b0: sw $v1, 0x20($a0)
    *(uint32_t*)((a0) + 0x24) = v1;                             // 0x0016b5b4: sw $v1, 0x24($a0)
    *(uint32_t*)((a0) + 0x28) = v1;                             // 0x0016b5b8: sw $v1, 0x28($a0)
    *(uint32_t*)((a0) + 0x30) = 0;                              // 0x0016b5bc: sw $zero, 0x30($a0)
label_0x16b5c0:
    a2 = a2 + -1;                                               // 0x0016b5c0: addiu $a2, $a2, -1
    *(uint32_t*)(a1) = 0;                                       // 0x0016b5c4: sw $zero, 0($a1)
    /* nop */                                                   // 0x0016b5c8: nop 
    /* nop */                                                   // 0x0016b5cc: nop 
    /* nop */                                                   // 0x0016b5d0: nop 
    if (a2 >= 0) goto label_0x16b5c0;                           // 0x0016b5d4: bgez $a2, 0x16b5c0
    a1 = a1 + -4;                                               // 0x0016b5d8: addiu $a1, $a1, -4
    *(uint32_t*)((a0) + 0x148) = 0;                             // 0x0016b5dc: sw $zero, 0x148($a0)
    return;                                                     // 0x0016b5e0: jr $ra
    *(uint32_t*)((a0) + 0x144) = 0;                             // 0x0016b5e4: sw $zero, 0x144($a0)
}