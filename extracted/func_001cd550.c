void func_001cd550() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001cd550: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cd560: addu.qb $zero, $sp, $s1
    a0 = 0x32 << 16;                                            // 0x001cd564: lui $a0, 0x32
    a0 = a0 + 0x3710;                                           // 0x001cd56c: addiu $a0, $a0, 0x3710
    func_001ce6d0();  // 0x1ce6c0                                // 0x001cd570: jal 0x1ce6c0
    if (v0 != 0) goto label_0x1cd588;                           // 0x001cd578: bnez $v0, 0x1cd588
    a0 = 0x32 << 16;                                            // 0x001cd57c: lui $a0, 0x32
    goto label_0x1cd5c8;                                        // 0x001cd580: b 0x1cd5c8
label_0x1cd588:
    thunk_func_001cfeb0();  // 0x1ce800                          // 0x001cd588: jal 0x1ce800
    a0 = a0 + 0x3710;                                           // 0x001cd58c: addiu $a0, $a0, 0x3710
    v1 = v0 & 0xffff;                                           // 0x001cd590: andi $v1, $v0, 0xffff
    a0 = 0x32 << 16;                                            // 0x001cd594: lui $a0, 0x32
    v0 = v1 >> 0xc;                                             // 0x001cd598: sra $v0, $v1, 0xc
    a0 = a0 + 0x3710;                                           // 0x001cd59c: addiu $a0, $a0, 0x3710
    v0 = v0 & 0xf;                                              // 0x001cd5a0: andi $v0, $v0, 0xf
    s0 = v1 & 0xfff;                                            // 0x001cd5a4: andi $s0, $v1, 0xfff
    func_001ce700();  // 0x1ce6f0                                // 0x001cd5a8: jal 0x1ce6f0
    *(uint32_t*)(s1) = v0;                                      // 0x001cd5ac: sw $v0, 0($s1)
    a0 = 0x32 << 16;                                            // 0x001cd5b0: lui $a0, 0x32
    *(uint32_t*)(s2) = v0;                                      // 0x001cd5b4: sw $v0, 0($s2)
    a0 = a0 + 0x3710;                                           // 0x001cd5b8: addiu $a0, $a0, 0x3710
    thunk_func_001cffd0();  // 0x1ce8a0                          // 0x001cd5bc: jal 0x1ce8a0
label_0x1cd5c8:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cd5cc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cd5d0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cd5d4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cd5d8: jr $ra
    sp = sp + 0x40;                                             // 0x001cd5dc: addiu $sp, $sp, 0x40
}