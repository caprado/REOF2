void func_001c7310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001c7310: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c731c: addu.qb $zero, $sp, $s1
    s1 = 0x24 << 16;                                            // 0x001c7324: lui $s1, 0x24
    s1 = &str_00243850;  // "send \\"                           // 0x001c732c: addiu $s1, $s1, 0x3850
label_0x1c7330:
    func_00128e28();  // 0x128d88                                // 0x001c7334: jal 0x128d88
    /* nop */                                                   // 0x001c7340: nop 
    if (v0 == 0) goto label_0x1c7330;                           // 0x001c7344: beqz $v0, 0x1c7330
    /* nop */                                                   // 0x001c7348: nop 
    func_00129968();  // 0x1298c8                                // 0x001c734c: jal 0x1298c8
    func_001294a0();  // 0x129460                                // 0x001c735c: jal 0x129460
label_0x1c7364:
    func_00129a38();  // 0x129a08                                // 0x001c7364: jal 0x129a08
    v1 = 3;                                                     // 0x001c736c: addiu $v1, $zero, 3
    /* nop */                                                   // 0x001c7370: nop 
    /* nop */                                                   // 0x001c7374: nop 
    if (v0 != v1) goto label_0x1c7364;                          // 0x001c7378: bne $v0, $v1, 0x1c7364
    /* nop */                                                   // 0x001c737c: nop 
    func_001290c8();  // 0x129010                                // 0x001c7380: jal 0x129010
    func_001c0d00();  // 0x1c0c00                                // 0x001c7388: jal 0x1c0c00
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c7394: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c7398: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c739c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c73a0: jr $ra
    sp = sp + 0x40;                                             // 0x001c73a4: addiu $sp, $sp, 0x40
}