void func_001b69e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b69e0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001b69ec: addu.qb $zero, $sp, $s0
    goto label_0x1b6a38;                                        // 0x001b69f4: b 0x1b6a38
label_0x1b69fc:
    a2 = s0 << 6;                                               // 0x001b69fc: sll $a2, $s0, 6
    v1 = *(int32_t*)((s1) + 0x34);                              // 0x001b6a08: lw $v1, 0x34($s1)
    a3 = 1;                                                     // 0x001b6a0c: addiu $a3, $zero, 1
    v0 = *(int32_t*)((s1) + 0x58);                              // 0x001b6a10: lw $v0, 0x58($s1)
    t3 = 8;                                                     // 0x001b6a20: addiu $t3, $zero, 8
    a1 = v1 + a2;                                               // 0x001b6a24: addu $a1, $v1, $a2
    func_001b69e0();  // 0x1b6860                                // 0x001b6a28: jal 0x1b6860
    a2 = v0 + s0;                                               // 0x001b6a2c: addu $a2, $v0, $s0
    s0 = s0 + 1;                                                // 0x001b6a34: addiu $s0, $s0, 1
label_0x1b6a38:
    v0 = *(int32_t*)((s1) + 0x24);                              // 0x001b6a38: lw $v0, 0x24($s1)
    v0 = ((unsigned)s0 < (unsigned)v0) ? 1 : 0;                 // 0x001b6a3c: sltu $v0, $s0, $v0
    if (v0 != 0) goto label_0x1b69fc;                           // 0x001b6a40: bnez $v0, 0x1b69fc
    v0 = 2;                                                     // 0x001b6a44: addiu $v0, $zero, 2
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001b6a50: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001b6a54: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001b6a58: jr $ra
    sp = sp + 0x40;                                             // 0x001b6a5c: addiu $sp, $sp, 0x40
}