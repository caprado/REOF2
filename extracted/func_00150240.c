void func_00150240() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00150240: addiu $sp, $sp, -0x20
    func_00155af8();  // 155af8                                // 0x0015025c: jal 0x155af8
    a1 = 0xff03 << 16;                                          // 0x00150264: lui $a1, 0xff03
    s0 = s0 + 4;                                                // 0x00150268: addiu $s0, $s0, 4
    if (v0 == 0) goto label_0x150290;                           // 0x00150270: beqz $v0, 0x150290
    a1 = a1 | 0x203;                                            // 0x00150274: ori $a1, $a1, 0x203
    return func_00150380();  // Tail call                        // 0x00150288: j 0x150330
    sp = sp + 0x20;                                             // 0x0015028c: addiu $sp, $sp, 0x20
label_0x150290:
    *(uint32_t*)((s0) + 4) = s1;                                // 0x00150290: sw $s1, 4($s0)
    *(uint32_t*)(s0) = s2;                                      // 0x00150294: sw $s2, 0($s0)
    return;                                                     // 0x001502a8: jr $ra
    sp = sp + 0x20;                                             // 0x001502ac: addiu $sp, $sp, 0x20
}