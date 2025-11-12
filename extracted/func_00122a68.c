void func_00122a68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00122a68: addiu $sp, $sp, -0x20
    v0 = 0x1f << 16;                                            // 0x00122a6c: lui $v0, 0x1f
    s0 = v0 + 0x1a18;                                           // 0x00122a78: addiu $s0, $v0, 0x1a18
    s1 = 0xf;                                                   // 0x00122a80: addiu $s1, $zero, 0xf
    s2 = 1;                                                     // 0x00122a88: addiu $s2, $zero, 1
    /* nop */                                                   // 0x00122a8c: nop 
label_0x122a90:
    v0 = g_001f1a18;  // Global at 0x001f1a18                   // 0x00122a90: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x122aa8;                          // 0x00122a94: bnel $v0, $s2, 0x122aa8
    s1 = s1 + -1;                                               // 0x00122a98: addiu $s1, $s1, -1
    func_00122a68();  // 0x122a40                                // 0x00122a9c: jal 0x122a40
    s1 = s1 + -1;                                               // 0x00122aa4: addiu $s1, $s1, -1
label_0x122aa8:
    if (s1 >= 0) goto label_0x122a90;                           // 0x00122aa8: bgez $s1, 0x122a90
    s0 = s0 + 0x30;                                             // 0x00122aac: addiu $s0, $s0, 0x30
    return;                                                     // 0x00122ac0: jr $ra
    sp = sp + 0x20;                                             // 0x00122ac4: addiu $sp, $sp, 0x20
}