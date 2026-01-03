void func_001b3120() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b3120: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b312c: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)((a0) + 0x34);                              // 0x001b3138: lw $v1, 0x34($a0)
    s2 = *(uint16_t*)((v1) + 0x816);                            // 0x001b313c: lhu $s2, 0x816($v1)
    goto label_0x1b3168;                                        // 0x001b3140: b 0x1b3168
label_0x1b3148:
    v1 = *(int32_t*)((s1) + 0x34);                              // 0x001b3148: lw $v1, 0x34($s1)
    v0 = 0x41a0 << 16;                                          // 0x001b314c: lui $v0, 0x41a0
    /* move to FPU: $v0, $f12 */                                // 0x001b3150: mtc1 $v0, $f12
    a0 = s0 << 2;                                               // 0x001b3154: sll $a0, $s0, 2
    v0 = v1 + a0;                                               // 0x001b3158: addu $v0, $v1, $a0
    func_001b2f90();  // 1b2f90                                // 0x001b315c: jal 0x1b2f90
    a0 = g_41a00820;  // Global at 0x41a00820                   // 0x001b3160: lw $a0, 0x820($v0)
    s0 = s0 + 1;                                                // 0x001b3164: addiu $s0, $s0, 1
label_0x1b3168:
    v1 = ((unsigned)s0 < (unsigned)s2) ? 1 : 0;                 // 0x001b3168: sltu $v1, $s0, $s2
    if (v1 != 0) goto label_0x1b3148;                           // 0x001b316c: bnez $v1, 0x1b3148
    /* nop */                                                   // 0x001b3170: nop 
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b3178: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b317c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b3180: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b3184: jr $ra
    sp = sp + 0x40;                                             // 0x001b3188: addiu $sp, $sp, 0x40
}