void func_0017e360() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0017e360: addiu $sp, $sp, -0x40
    *(uint32_t*)(s2) = 0;                                       // 0x0017e38c: sw $zero, 0($s2)
    if (s0 == 0) goto label_0x17e404;                           // 0x0017e390: beqz $s0, 0x17e404
    *(uint32_t*)(s3) = 0;                                       // 0x0017e394: sw $zero, 0($s3)
    if (a1 <= 0) goto label_0x17e408;                           // 0x0017e398: blezl $a1, 0x17e408
    if (a1 <= 0) goto label_0x17e408;                           // 0x0017e3a0: blezl $a1, 0x17e408
    s5 = 0x23 << 16;                                            // 0x0017e3ac: lui $s5, 0x23
    s4 = 0x23 << 16;                                            // 0x0017e3b0: lui $s4, 0x23
    /* nop */                                                   // 0x0017e3b4: nop 
label_0x17e3b8:
    a1 = s5 + -0x6208;                                          // 0x0017e3bc: addiu $a1, $s5, -0x6208
    func_00107ab8();  // 0x107a20                                // 0x0017e3c0: jal 0x107a20
    a2 = 1;                                                     // 0x0017e3c4: addiu $a2, $zero, 1
    a1 = &str_00229d80;  // "<%06X>"                            // 0x0017e3cc: addiu $a1, $s4, -0x6280
    if (v0 != 0) goto label_0x17e3f8;                           // 0x0017e3d0: bnez $v0, 0x17e3f8
    a2 = 8;                                                     // 0x0017e3d4: addiu $a2, $zero, 8
    func_00107ab8();  // 0x107a20                                // 0x0017e3d8: jal 0x107a20
    /* nop */                                                   // 0x0017e3dc: nop 
    /* bnezl $v0, 0x17e3fc */                                   // 0x0017e3e0: bnezl $v0, 0x17e3fc
    s1 = s1 + -1;                                               // 0x0017e3e4: addiu $s1, $s1, -1
    *(uint32_t*)(s3) = s0;                                      // 0x0017e3e8: sw $s0, 0($s3)
    func_0017e438();  // 0x17e428                                // 0x0017e3ec: jal 0x17e428
    *(uint32_t*)(s2) = v0;                                      // 0x0017e3f4: sw $v0, 0($s2)
label_0x17e3f8:
    s1 = s1 + -1;                                               // 0x0017e3f8: addiu $s1, $s1, -1
    if (s1 != 0) goto label_0x17e3b8;                           // 0x0017e3fc: bnez $s1, 0x17e3b8
    s0 = s0 + 1;                                                // 0x0017e400: addiu $s0, $s0, 1
label_0x17e404:
label_0x17e408:
    return;                                                     // 0x0017e420: jr $ra
    sp = sp + 0x40;                                             // 0x0017e424: addiu $sp, $sp, 0x40
}