void func_001bca60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4c;
    
    sp = sp + -0x50;                                            // 0x001bca60: addiu $sp, $sp, -0x50
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bca6c: addu.qb $zero, $sp, $s1
label_0x1bca80:
    func_0011c478();  // 0x11c458                                // 0x001bca8c: jal 0x11c458
    a3 = sp + 0x4c;                                             // 0x001bca90: addiu $a3, $sp, 0x4c
    if (v0 < 0) goto label_0x1bca80;                            // 0x001bca94: bltz $v0, 0x1bca80
    /* nop */                                                   // 0x001bca98: nop 
    v0 = local_4c;                                              // 0x001bca9c: lw $v0, 0x4c($sp)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001bcaa4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bcaa8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bcaac: xori.b $w0, $w0, 0xb0
    v0 = v0 ^ 1;                                                // 0x001bcab0: xori $v0, $v0, 1
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001bcab4: sltiu $v0, $v0, 1
    v0 = -v0;                                                   // 0x001bcab8: negu $v0, $v0
    return;                                                     // 0x001bcabc: jr $ra
    sp = sp + 0x50;                                             // 0x001bcac0: addiu $sp, $sp, 0x50
}