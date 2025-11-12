void func_001adab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001adab0: addiu $sp, $sp, -0x30
    v0 = 0x2b << 16;                                            // 0x001adab4: lui $v0, 0x2b
    v0 = v0 + -0x5788;                                          // 0x001adabc: addiu $v0, $v0, -0x5788
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001adac0: addu.qb $zero, $sp, $s1
    a0 = a0 << 2;                                               // 0x001adacc: sll $a0, $a0, 2
    s0 = a1 & 0x7f;                                             // 0x001adad0: andi $s0, $a1, 0x7f
    a0 = v0 + a0;                                               // 0x001adad4: addu $a0, $v0, $a0
    v1 = s0 << 2;                                               // 0x001adad8: sll $v1, $s0, 2
    v0 = 0x22 << 16;                                            // 0x001adadc: lui $v0, 0x22
    v0 = v0 + -0x4300;                                          // 0x001adae0: addiu $v0, $v0, -0x4300
    v0 = v0 + v1;                                               // 0x001adae4: addu $v0, $v0, $v1
    v1 = g_0021bd00;  // Global at 0x0021bd00                   // 0x001adae8: lw $v1, 0($v0)
    v0 = 0xa;                                                   // 0x001adaec: addiu $v0, $zero, 0xa
    /* divide: v1 / v0 -> hi:lo */                              // 0x001adaf0: div $zero, $v1, $v0
    /* nop */                                                   // 0x001adaf4: nop 
    /* nop */                                                   // 0x001adaf8: nop 
    /* mflo $a1 */                                              // 0x001adafc
    func_001324e0();  // 0x132478                                // 0x001adb00: jal 0x132478
    a0 = *(int32_t*)(a0);                                       // 0x001adb04: lw $a0, 0($a0)
    v0 = s1 << 1;                                               // 0x001adb08: sll $v0, $s1, 1
    v1 = 0x2b << 16;                                            // 0x001adb0c: lui $v1, 0x2b
    a0 = v0 + s1;                                               // 0x001adb10: addu $a0, $v0, $s1
    v1 = v1 + -0x57d8;                                          // 0x001adb14: addiu $v1, $v1, -0x57d8
    v0 = 0x2b << 16;                                            // 0x001adb18: lui $v0, 0x2b
    a1 = a0 << 3;                                               // 0x001adb1c: sll $a1, $a0, 3
    v0 = v0 + -0x57dc;                                          // 0x001adb20: addiu $v0, $v0, -0x57dc
    v1 = v1 + a1;                                               // 0x001adb24: addu $v1, $v1, $a1
    a0 = v0 + a1;                                               // 0x001adb28: addu $a0, $v0, $a1
    g_002aa828 = s0;  // Global at 0x002aa828                   // 0x001adb2c: sw $s0, 0($v1)
    v0 = *(int32_t*)(a0);                                       // 0x001adb30: lw $v0, 0($a0)
    at = (s0 < v0) ? 1 : 0;                                     // 0x001adb34: slt $at, $s0, $v0
    if (at == 0) goto label_0x1adb44;                           // 0x001adb38: beqz $at, 0x1adb44
    v0 = 0x2b << 16;                                            // 0x001adb3c: lui $v0, 0x2b
    *(uint32_t*)(a0) = s0;                                      // 0x001adb40: sw $s0, 0($a0)
label_0x1adb44:
    /* move to FPU: $s0, $f0 */                                 // 0x001adb44: mtc1 $s0, $f0
    v0 = v0 + -0x57d0;                                          // 0x001adb48: addiu $v0, $v0, -0x57d0
    v0 = v0 + a1;                                               // 0x001adb4c: addu $v0, $v0, $a1
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001adb50: cvt.s.w $f0, $f0
    FPU_F1 = *(float*)(v0);  // Load float                      // 0x001adb54: lwc1 $f1, 0($v0)
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001adb58: c.ole.s $f1, $f0
    /* bc1t 0x1adb68 */                                         // 0x001adb5c: bc1t 0x1adb68
    /* nop */                                                   // 0x001adb60: nop 
    *(float*)(v0) = FPU_F0;  // Store float                     // 0x001adb64: swc1 $f0, 0($v0)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001adb70: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001adb74: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001adb78: jr $ra
    sp = sp + 0x30;                                             // 0x001adb7c: addiu $sp, $sp, 0x30
}