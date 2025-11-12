void func_0017eee8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017eee8: addiu $sp, $sp, -0x30
    func_0011d378();  // 0x11d320                                // 0x0017eefc: jal 0x11d320
    /* FPU: nori.b $w0, $w0, 6 */                               // 0x0017ef04: nori.b $w0, $w0, 6
    /* FPU: ave_s.b $w0, $w0, $w7 */                            // 0x0017ef08: ave_s.b $w0, $w0, $w7
    /* FPU: ld.b $w0, -0x1f8($zero) */                          // 0x0017ef0c: ld.b $w0, -0x1f8($zero)
    /* FPU: addu.qb $zero, $s1, $a3 */                          // 0x0017ef18: addu.qb $zero, $s1, $a3
    /* FPU: dpa.w.ph $ac0, $s1, $t1 */                          // 0x0017ef20: dpa.w.ph $ac0, $s1, $t1
    if (v0 == 0) goto label_0x17ef3c;                           // 0x0017ef24: beqz $v0, 0x17ef3c
    return func_0011d390();  // Tail call                        // 0x0017ef34: j 0x11d378
    sp = sp + 0x30;                                             // 0x0017ef38: addiu $sp, $sp, 0x30
label_0x17ef3c:
    return;                                                     // 0x0017ef44: jr $ra
    sp = sp + 0x30;                                             // 0x0017ef48: addiu $sp, $sp, 0x30
}