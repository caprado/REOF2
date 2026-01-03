void func_00178db0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00178db0: addiu $sp, $sp, -0x40
    s6 = 0x26 << 16;                                            // 0x00178dd4: lui $s6, 0x26
    a0 = s6 + 0x78b8;                                           // 0x00178ddc: addiu $a0, $s6, 0x78b8
    s1 = g_002678b8;  // Global at 0x002678b8                   // 0x00178dec: lw $s1, 0($a0)
    v1 = g_002678bc;  // Global at 0x002678bc                   // 0x00178df0: lw $v1, 4($a0)
    v1 = (v1 < s1) ? 1 : 0;                                     // 0x00178df4: slt $v1, $v1, $s1
    if (v1 == 0) goto label_0x178e50;                           // 0x00178df8: beqz $v1, 0x178e50
    s3 = g_002678c0;  // Global at 0x002678c0                   // 0x00178dfc: lw $s3, 8($a0)
    v0 = (s0 < s1) ? 1 : 0;                                     // 0x00178e04: slt $v0, $s0, $s1
label_0x178e08:
    /* beqzl $v0, 0x178e30 */                                   // 0x00178e08: beqzl $v0, 0x178e30
    v0 = s0 << 4;                                               // 0x00178e10: sll $v0, $s0, 4
    s0 = s0 + 1;                                                // 0x00178e14: addiu $s0, $s0, 1
    s2 = s3 + v0;                                               // 0x00178e18: addu $s2, $s3, $v0
    func_00178f48();  // 178f48                                // 0x00178e1c: jal 0x178f48
    if (v0 == 0) goto label_0x178e08;                           // 0x00178e24: beqz $v0, 0x178e08
    v0 = (s0 < s1) ? 1 : 0;                                     // 0x00178e28: slt $v0, $s0, $s1
    func_00178ee0();  // 178ee0                                // 0x00178e34: jal 0x178ee0
    a0 = s6 + 0x78b8;                                           // 0x00178e3c: addiu $a0, $s6, 0x78b8
    v1 = g_002678bc;  // Global at 0x002678bc                   // 0x00178e40: lw $v1, 4($a0)
    v1 = v1 + 1;                                                // 0x00178e48: addiu $v1, $v1, 1
    g_002678bc = v1;  // Global at 0x002678bc                   // 0x00178e4c: sw $v1, 4($a0)
label_0x178e50:
    return;                                                     // 0x00178e70: jr $ra
    sp = sp + 0x40;                                             // 0x00178e74: addiu $sp, $sp, 0x40
}