void func_001b7e90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b7e90: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b7e98: addu.qb $zero, $sp, $s1
    s0 = 1;                                                     // 0x001b7ea4: addiu $s0, $zero, 1
label_0x1b7ea8:
    /* move to FPU: $s1, $f1 */                                 // 0x001b7ea8: mtc1 $s1, $f1
    v0 = 0x40e0 << 16;                                          // 0x001b7eac: lui $v0, 0x40e0
    /* move to FPU: $v0, $f0 */                                 // 0x001b7eb0: mtc1 $v0, $f0
    /* nop */                                                   // 0x001b7eb4: nop 
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001b7eb8: cvt.s.w $f1, $f1
    v0 = 0x42fe << 16;                                          // 0x001b7ebc: lui $v0, 0x42fe
    /* FPU: div.s $f1, $f1, $f0 */                              // 0x001b7ec0: div.s $f1, $f1, $f0
    /* move to FPU: $v0, $f0 */                                 // 0x001b7ec4: mtc1 $v0, $f0
    /* nop */                                                   // 0x001b7ec8: nop 
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x001b7ecc: mul.s $f0, $f0, $f1
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001b7ed0: cvt.w.s $f0, $f0
    /* move from FPU: $a1, $f0 */                               // 0x001b7ed4: mfc1 $a1, $f0
    func_001adbe0();  // 0x1adab0                                // 0x001b7ed8: jal 0x1adab0
    s0 = s0 + 1;                                                // 0x001b7ee0: addiu $s0, $s0, 1
    v1 = (s0 < 3) ? 1 : 0;                                      // 0x001b7ee4: slti $v1, $s0, 3
    if (v1 != 0) goto label_0x1b7ea8;                           // 0x001b7ee8: bnez $v1, 0x1b7ea8
    /* nop */                                                   // 0x001b7eec: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b7ef4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b7ef8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b7efc: jr $ra
    sp = sp + 0x30;                                             // 0x001b7f00: addiu $sp, $sp, 0x30
}