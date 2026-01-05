void func_001d61c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001d61c0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d61c8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d61d4: addu.qb $zero, $sp, $s1
    func_001d9490();  // 1d9490                                // 0x001d61ec: jal 0x1d9490
    func_001b29e0();  // 1b29e0                                // 0x001d61f4: jal 0x1b29e0
    a2 = s2 & 0xff;                                             // 0x001d61fc: andi $a2, $s2, 0xff
    func_001d96b0();  // 1d96b0                                // 0x001d6204: jal 0x1d96b0
    if (s0 != 0) goto label_0x1d621c;                           // 0x001d620c: bnez $s0, 0x1d621c
    v0 = 1;                                                     // 0x001d6210: addiu $v0, $zero, 1
    goto label_0x1d6234;                                        // 0x001d6214: b 0x1d6234
label_0x1d621c:
    a0 = *(int32_t*)((gp) + -0x7ae4);                           // 0x001d621c: lw $a0, -0x7ae4($gp)
    func_001d4c80();  // 1d4c80                                // 0x001d6224: jal 0x1d4c80
    v0 = 3;                                                     // 0x001d622c: addiu $v0, $zero, 3
label_0x1d6234:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d6238: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d623c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d6240: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d6244: jr $ra
    sp = sp + 0x50;                                             // 0x001d6248: addiu $sp, $sp, 0x50
}