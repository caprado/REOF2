void func_001290c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001290c8: addiu $sp, $sp, -0x20
    v0 = 0x1f << 16;                                            // 0x001290cc: lui $v0, 0x1f
    s0 = v0 + 0x2ec0;                                           // 0x001290d8: addiu $s0, $v0, 0x2ec0
    s1 = 0xf;                                                   // 0x001290e0: addiu $s1, $zero, 0xf
    s2 = 1;                                                     // 0x001290e8: addiu $s2, $zero, 1
    /* nop */                                                   // 0x001290ec: nop 
label_0x1290f0:
    v0 = g_001f2ec0;  // Global at 0x001f2ec0                   // 0x001290f0: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x129108;                          // 0x001290f4: bnel $v0, $s2, 0x129108
    s1 = s1 + -1;                                               // 0x001290f8: addiu $s1, $s1, -1
    func_00129010();  // 129010                                // 0x001290fc: jal 0x129010
    s1 = s1 + -1;                                               // 0x00129104: addiu $s1, $s1, -1
label_0x129108:
    if (s1 >= 0) goto label_0x1290f0;                           // 0x00129108: bgez $s1, 0x1290f0
    s0 = s0 + 0x44;                                             // 0x0012910c: addiu $s0, $s0, 0x44
    return;                                                     // 0x00129120: jr $ra
    sp = sp + 0x20;                                             // 0x00129124: addiu $sp, $sp, 0x20
}