void func_001c24f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c24f0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c24f8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c2504: addu.qb $zero, $sp, $s1
    s0 = 0x3e8;                                                 // 0x001c2514: addiu $s0, $zero, 0x3e8
label_0x1c2518:
    /* divide: s2 / s0 -> hi:lo */                              // 0x001c2518: div $zero, $s2, $s0
    v0 = 0x22 << 16;                                            // 0x001c251c: lui $v0, 0x22
    v1 = 0xa;                                                   // 0x001c2520: addiu $v1, $zero, 0xa
    v0 = v0 + -0x12c0;                                          // 0x001c2524: addiu $v0, $v0, -0x12c0
    a2 = 2;                                                     // 0x001c252c: addiu $a2, $zero, 2
    /* mfhi $s2 */                                              // 0x001c2530
    /* divide: s0 / v1 -> hi:lo */                              // 0x001c2534: div $zero, $s0, $v1
    /* nop */                                                   // 0x001c2538: nop 
    /* nop */                                                   // 0x001c253c: nop 
    /* mflo $s0 */                                              // 0x001c2540
    /* divide: s2 / s0 -> hi:lo */                              // 0x001c2544: div $zero, $s2, $s0
    /* nop */                                                   // 0x001c2548: nop 
    /* nop */                                                   // 0x001c254c: nop 
    /* mflo $v1 */                                              // 0x001c2550
    v1 = v1 << 1;                                               // 0x001c2554: sll $v1, $v1, 1
    func_0010b460();  // 0x10b2a0                                // 0x001c2558: jal 0x10b2a0
    a1 = v0 + v1;                                               // 0x001c255c: addu $a1, $v0, $v1
    s1 = s1 + 1;                                                // 0x001c2560: addiu $s1, $s1, 1
    v1 = (s1 < 3) ? 1 : 0;                                      // 0x001c2564: slti $v1, $s1, 3
    if (v1 != 0) goto label_0x1c2518;                           // 0x001c2568: bnez $v1, 0x1c2518
    s3 = s3 + 2;                                                // 0x001c256c: addiu $s3, $s3, 2
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c2578: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c257c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c2580: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c2584: jr $ra
    sp = sp + 0x50;                                             // 0x001c2588: addiu $sp, $sp, 0x50
}