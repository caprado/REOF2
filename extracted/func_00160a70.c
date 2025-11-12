void func_00160a70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00160a70: addiu $sp, $sp, -0x20
    func_00160b58();  // 0x160ae8                                // 0x00160a84: jal 0x160ae8
    s1 = a1 + 0x60;                                             // 0x00160a88: addiu $s1, $a1, 0x60
    *(uint32_t*)(s1) = v0;                                      // 0x00160a8c: sw $v0, 0($s1)
    func_00160bc8();  // 0x160b58                                // 0x00160a94: jal 0x160b58
    s0 = s0 + 0x88;                                             // 0x00160a98: addiu $s0, $s0, 0x88
    v1 = *(int32_t*)((s0) + 8);                                 // 0x00160a9c: lw $v1, 8($s0)
    *(uint32_t*)((s1) + 4) = v0;                                // 0x00160aa0: sw $v0, 4($s1)
    *(uint32_t*)((s1) + 8) = v1;                                // 0x00160aa4: sw $v1, 8($s1)
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x00160aa8: lw $a0, 0x14($s0)
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00160aac: lw $v0, 0xc($s0)
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x00160ab0: sw $v0, 0xc($s1)
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x00160ab4: lw $v1, 0x10($s0)
    func_00160c18();  // 0x160bc8                                // 0x00160ab8: jal 0x160bc8
    *(uint32_t*)((s1) + 0x10) = v1;                             // 0x00160abc: sw $v1, 0x10($s1)
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x00160ac0: lw $a0, 0x18($s0)
    func_00160c18();  // 0x160bc8                                // 0x00160ac4: jal 0x160bc8
    *(uint32_t*)((s1) + 0x14) = v0;                             // 0x00160ac8: sw $v0, 0x14($s1)
    *(uint32_t*)((s1) + 0x18) = v0;                             // 0x00160acc: sw $v0, 0x18($s1)
    return;                                                     // 0x00160adc: jr $ra
    sp = sp + 0x20;                                             // 0x00160ae0: addiu $sp, $sp, 0x20
}