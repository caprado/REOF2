void func_0011ef38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0011ef38: addiu $sp, $sp, -0x20
    a0 = a0 & 0xfe;                                             // 0x0011ef3c: andi $a0, $a0, 0xfe
    v1 = s0 << 4;                                               // 0x0011ef4c: sll $v1, $s0, 4
    v1 = v1 | a0;                                               // 0x0011ef50: or $v1, $v1, $a0
    v0 = *(int32_t*)((s0) + 8);                                 // 0x0011ef54: lw $v0, 8($s0)
    a3 = *(int32_t*)((s0) + 0xc);                               // 0x0011ef58: lw $a3, 0xc($s0)
    /* call function at address in v0 */                        // 0x0011ef5c: jalr $v0
    a0 = v1 | 1;                                                // 0x0011ef60: ori $a0, $v1, 1
    if (v0 != 0) goto label_0x11ef88;                           // 0x0011ef64: bnez $v0, 0x11ef88
    v1 = 0x25 << 16;                                            // 0x0011ef6c: lui $v1, 0x25
    v0 = -1;                                                    // 0x0011ef70: addiu $v0, $zero, -1
    a0 = g_00253480;  // Global at 0x00253480                   // 0x0011ef74: lw $a0, 0x3480($v1)
    g_00253480 = s0;  // Global at 0x00253480                   // 0x0011ef78: sw $s0, 0x3480($v1)
    *(uint32_t*)(s0) = a0;                                      // 0x0011ef7c: sw $a0, 0($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0011ef80: sw $zero, 4($s0)
label_0x11ef88:
    return;                                                     // 0x0011ef8c: jr $ra
    sp = sp + 0x20;                                             // 0x0011ef90: addiu $sp, $sp, 0x20
}