void func_0017b6e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017b6e0: addiu $sp, $sp, -0x10
    return func_0017b8e8();  // Tail call                        // 0x0017b6ec: j 0x17b830
    sp = sp + 0x10;                                             // 0x0017b6f0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017b6f4: nop 
    sp = sp + -0x40;                                            // 0x0017b6f8: addiu $sp, $sp, -0x40
    a2 = sp + 4;                                                // 0x0017b720: addiu $a2, $sp, 4
    func_0017cf28();  // 0x17cf28                               // 0x0017b728: jal 0x17cf28
    s2 = *(int32_t*)((s0) + 0x48);                              // 0x0017b72c: lw $s2, 0x48($s0)
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017b730: lw $v0, 0x48($s0)
    s1 = (unsigned)s2 >> 0x1f;                                  // 0x0017b738: srl $s1, $s2, 0x1f
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0017b73c: srl $v1, $v0, 0x1f
    s1 = s2 + s1;                                               // 0x0017b740: addu $s1, $s2, $s1
    v0 = v0 + v1;                                               // 0x0017b744: addu $v0, $v0, $v1
    s1 = s1 >> 1;                                               // 0x0017b748: sra $s1, $s1, 1
    v0 = v0 >> 1;                                               // 0x0017b74c: sra $v0, $v0, 1
    func_0017d1d8();  // 0x17d1d8                               // 0x0017b754: jal 0x17d1d8
    *(uint32_t*)((s0) + 0x48) = v0;                             // 0x0017b758: sw $v0, 0x48($s0)
    func_0017b8e8();  // 0x17b830                                // 0x0017b764: jal 0x17b830
    func_0017d1d8();  // 0x17d1d8                               // 0x0017b770: jal 0x17d1d8
    func_0017d150();  // 0x17d150                               // 0x0017b77c: jal 0x17d150
    return;                                                     // 0x0017b79c: jr $ra
    sp = sp + 0x40;                                             // 0x0017b7a0: addiu $sp, $sp, 0x40
}