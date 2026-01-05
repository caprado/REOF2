void func_001a29e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a29e0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a29e8: addu.qb $zero, $sp, $s1
    func_001a2780();  // 1a2780                                // 0x001a29f4: jal 0x1a2780
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001a29fc: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x1a2a10;                           // 0x001a2a00: bnez $v0, 0x1a2a10
    goto label_0x1a2a20;                                        // 0x001a2a08: b 0x1a2a20
label_0x1a2a10:
    func_001a2800();  // 1a2800                                // 0x001a2a10: jal 0x1a2800
    v0 = v0 << 6;                                               // 0x001a2a18: sll $v0, $v0, 6
    v0 = v0 + 0x10;                                             // 0x001a2a1c: addiu $v0, $v0, 0x10
label_0x1a2a20:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a2a24: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2a28: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a2a2c: jr $ra
    sp = sp + 0x30;                                             // 0x001a2a30: addiu $sp, $sp, 0x30
}