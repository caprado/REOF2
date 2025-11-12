void func_001c0e50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c0e50: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c0e58: addu.qb $zero, $sp, $s1
    s0 = 0x31 << 16;                                            // 0x001c0e64: lui $s0, 0x31
    goto label_0x1c0e84;                                        // 0x001c0e68: b 0x1c0e84
    s0 = s0 + 0x5fc0;                                           // 0x001c0e6c: addiu $s0, $s0, 0x5fc0
label_0x1c0e70:
    v0 = gp + -0x6300;                                          // 0x001c0e70: addiu $v0, $gp, -0x6300
    v0 = v0 + v1;                                               // 0x001c0e74: addu $v0, $v0, $v1
    func_00180bd8();  // 0x180b58                                // 0x001c0e78: jal 0x180b58
    a0 = *(int32_t*)(v0);                                       // 0x001c0e7c: lw $a0, 0($v0)
    s1 = s1 + 1;                                                // 0x001c0e80: addiu $s1, $s1, 1
label_0x1c0e84:
    v0 = g_00315fd0;  // Global at 0x00315fd0                   // 0x001c0e84: lw $v0, 0x10($s0)
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x001c0e88: slt $v0, $s1, $v0
    if (v0 != 0) goto label_0x1c0e70;                           // 0x001c0e8c: bnez $v0, 0x1c0e70
    v1 = s1 << 2;                                               // 0x001c0e90: sll $v1, $s1, 2
    func_00180ac8();  // 0x1809f0                                // 0x001c0e94: jal 0x1809f0
    /* nop */                                                   // 0x001c0e98: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c0ea0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c0ea4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c0ea8: jr $ra
    sp = sp + 0x30;                                             // 0x001c0eac: addiu $sp, $sp, 0x30
}