void func_0015de68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0015de68: addiu $sp, $sp, -0x50
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0015de98: lw $a0, 4($s0)
    func_0015df70();  // 0x15df30                                // 0x0015de9c: jal 0x15df30
    s7 = *(int32_t*)(s0);                                       // 0x0015dea0: lw $s7, 0($s0)
    s6 = *(int32_t*)((s0) + 8);                                 // 0x0015dea4: lw $s6, 8($s0)
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x0015dea8: lw $a0, 0x18($s0)
    s2 = *(int32_t*)((s0) + 0xc);                               // 0x0015deb0: lw $s2, 0xc($s0)
    s3 = *(int32_t*)((s0) + 0x10);                              // 0x0015deb4: lw $s3, 0x10($s0)
    func_0015dfd8();  // 0x15df70                                // 0x0015deb8: jal 0x15df70
    s4 = *(int32_t*)((s0) + 0x14);                              // 0x0015debc: lw $s4, 0x14($s0)
    v1 = *(int32_t*)((s0) + 0x2c);                              // 0x0015dec0: lw $v1, 0x2c($s0)
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0015dec4: lw $a0, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0x28);                              // 0x0015dec8: lw $a1, 0x28($s0)
    a2 = *(int32_t*)((s0) + 0x38);                              // 0x0015decc: lw $a2, 0x38($s0)
    a3 = *(int32_t*)((s0) + 0x3c);                              // 0x0015ded0: lw $a3, 0x3c($s0)
    *(uint32_t*)((s1) + 0x20) = s7;                             // 0x0015ded4: sw $s7, 0x20($s1)
    *(uint32_t*)((s1) + 0x1c) = s5;                             // 0x0015ded8: sw $s5, 0x1c($s1)
    *(uint32_t*)(s1) = s6;                                      // 0x0015dedc: sw $s6, 0($s1)
    *(uint32_t*)((s1) + 4) = s2;                                // 0x0015dee0: sw $s2, 4($s1)
    *(uint32_t*)((s1) + 8) = s3;                                // 0x0015dee4: sw $s3, 8($s1)
    *(uint32_t*)((s1) + 0xc) = s4;                              // 0x0015dee8: sw $s4, 0xc($s1)
    *(uint32_t*)((s1) + 0x2c) = v1;                             // 0x0015deec: sw $v1, 0x2c($s1)
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x0015def0: sw $v0, 0x10($s1)
    *(uint32_t*)((s1) + 0x14) = a0;                             // 0x0015def4: sw $a0, 0x14($s1)
    *(uint32_t*)((s1) + 0x18) = a1;                             // 0x0015def8: sw $a1, 0x18($s1)
    *(uint32_t*)((s1) + 0x24) = a2;                             // 0x0015defc: sw $a2, 0x24($s1)
    *(uint32_t*)((s1) + 0x28) = a3;                             // 0x0015df00: sw $a3, 0x28($s1)
    return;                                                     // 0x0015df28: jr $ra
    sp = sp + 0x50;                                             // 0x0015df2c: addiu $sp, $sp, 0x50
}