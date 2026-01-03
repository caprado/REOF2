void func_00165e18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00165e18: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x00165e34: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00165e3c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x165e68;                           // 0x00165e44: beqz $v0, 0x165e68
    a1 = a1 | 0x1a1;                                            // 0x00165e48: ori $a1, $a1, 0x1a1
    return func_00169940();  // Tail call                        // 0x00165e60: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00165e64: addiu $sp, $sp, 0x20
label_0x165e68:
    func_001752e8();  // 1752e8                                // 0x00165e68: jal 0x1752e8
    a1 = 6;                                                     // 0x00165e6c: addiu $a1, $zero, 6
    if (v0 == 0) goto label_0x165e90;                           // 0x00165e78: beqz $v0, 0x165e90
    v0 = *(int32_t*)((s0) + 0x1c84);                            // 0x00165e80: lw $v0, 0x1c84($s0)
    v1 = *(int32_t*)((v0) + 4);                                 // 0x00165e84: lw $v1, 4($v0)
    /* call function at address in v1 */                        // 0x00165e88: jalr $v1
    /* nop */                                                   // 0x00165e8c: nop 
label_0x165e90:
    return;                                                     // 0x00165ea0: jr $ra
    sp = sp + 0x20;                                             // 0x00165ea4: addiu $sp, $sp, 0x20
}