void func_00178cd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00178cd8: addiu $sp, $sp, -0x20
    v0 = 0x26 << 16;                                            // 0x00178cdc: lui $v0, 0x26
    a0 = v0 + 0x78c4;                                           // 0x00178cf4: addiu $a0, $v0, 0x78c4
    v0 = g_002678c4;  // Global at 0x002678c4                   // 0x00178cfc: lw $v0, 0($a0)
    if (v0 > 0) goto label_0x178d50;                            // 0x00178d00: bgtz $v0, 0x178d50
    v1 = v0 + 1;                                                // 0x00178d04: addiu $v1, $v0, 1
    g_002678c4 = v1;  // Global at 0x002678c4                   // 0x00178d08: sw $v1, 0($a0)
    s0 = 0x26 << 16;                                            // 0x00178d0c: lui $s0, 0x26
    func_00178cb8();  // 178cb8                                // 0x00178d10: jal 0x178cb8
    s0 = s0 + 0x78b0;                                           // 0x00178d14: addiu $s0, $s0, 0x78b0
    g_002678b0 = v0;  // Global at 0x002678b0                   // 0x00178d1c: sw $v0, 0($s0)
    func_00178ef8();  // 178ef8                                // 0x00178d20: jal 0x178ef8
    a0 = 0x26 << 16;                                            // 0x00178d28: lui $a0, 0x26
    a0 = a0 + 0x78b8;                                           // 0x00178d40: addiu $a0, $a0, 0x78b8
    return func_00178eb8();  // Tail call                       // 0x00178d48: j 0x178eb8
    sp = sp + 0x20;                                             // 0x00178d4c: addiu $sp, $sp, 0x20
label_0x178d50:
    return;                                                     // 0x00178d60: jr $ra
    sp = sp + 0x20;                                             // 0x00178d64: addiu $sp, $sp, 0x20
}