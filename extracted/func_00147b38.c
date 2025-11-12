void func_00147b38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00147b38: addiu $sp, $sp, -0x20
    v1 = -1;                                                    // 0x00147b44: addiu $v1, $zero, -1
    s0 = *(int32_t*)((v0) + 0x40);                              // 0x00147b4c: lw $s0, 0x40($v0)
    *(uint32_t*)((s0) + 0x10a0) = 0;                            // 0x00147b50: sw $zero, 0x10a0($s0)
    *(uint32_t*)(s0) = 0;                                       // 0x00147b58: sw $zero, 0($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00147b5c: sw $zero, 4($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x00147b60: sw $zero, 8($s0)
    *(uint32_t*)((v0) + 8) = 0;                                 // 0x00147b64: sw $zero, 8($v0)
    *(uint32_t*)((s0) + 0xc4) = 0;                              // 0x00147b68: sw $zero, 0xc4($s0)
    func_001484e8();  // 0x148420                                // 0x00147b6c: jal 0x148420
    *(uint32_t*)((s0) + 0x98) = v1;                             // 0x00147b70: sw $v1, 0x98($s0)
    *(uint32_t*)((s0) + 0x130) = 0;                             // 0x00147b74: sw $zero, 0x130($s0)
    func_00148340();  // 0x148330                                // 0x00147b78: jal 0x148330
    v0 = 1;                                                     // 0x00147b84: addiu $v0, $zero, 1
    return;                                                     // 0x00147b8c: jr $ra
    sp = sp + 0x20;                                             // 0x00147b90: addiu $sp, $sp, 0x20
}