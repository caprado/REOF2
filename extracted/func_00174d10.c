void func_00174d10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00174d10: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00174d24: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00174d2c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x174d50;                           // 0x00174d30: beqz $v0, 0x174d50
    a1 = a1 | 0x15b;                                            // 0x00174d3c: ori $a1, $a1, 0x15b
    return func_00169940();  // Tail call                        // 0x00174d48: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00174d4c: addiu $sp, $sp, 0x20
label_0x174d50:
    v1 = *(int32_t*)((s0) + 0x2ab0);                            // 0x00174d50: lw $v1, 0x2ab0($s0)
    /* beqzl $v1, 0x174d70 */                                   // 0x00174d54: beqzl $v1, 0x174d70
    *(uint32_t*)((v1) + 0xdbc) = s1;                            // 0x00174d5c: sw $s1, 0xdbc($v1)
    func_00174fa0();  // 0x174f18                                // 0x00174d60: jal 0x174f18
    return;                                                     // 0x00174d78: jr $ra
    sp = sp + 0x20;                                             // 0x00174d7c: addiu $sp, $sp, 0x20
}