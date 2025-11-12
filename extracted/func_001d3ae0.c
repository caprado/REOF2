void func_001d3ae0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001d3ae0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d3aec: addu.qb $zero, $sp, $s1
    goto label_0x1d3b54;                                        // 0x001d3afc: b 0x1d3b54
label_0x1d3b04:
    a1 = s2 + s0;                                               // 0x001d3b04: addu $a1, $s2, $s0
    goto label_0x1d3b44;                                        // 0x001d3b0c: b 0x1d3b44
    a0 = a0 + -0x1330;                                          // 0x001d3b10: addiu $a0, $a0, -0x1330
label_0x1d3b14:
    v1 = g_0032ecd0;  // Global at 0x0032ecd0                   // 0x001d3b14: lw $v1, 0($a0)
    if (v1 == 0) goto label_0x1d3b3c;                           // 0x001d3b18: beqz $v1, 0x1d3b3c
    /* nop */                                                   // 0x001d3b1c: nop 
    v1 = g_0032ecd4;  // Global at 0x0032ecd4                   // 0x001d3b20: lw $v1, 4($a0)
    if (v1 != a1) goto label_0x1d3b3c;                          // 0x001d3b24: bne $v1, $a1, 0x1d3b3c
    /* nop */                                                   // 0x001d3b28: nop 
    func_001d35a0();  // 0x1d3540                                // 0x001d3b2c: jal 0x1d3540
    /* nop */                                                   // 0x001d3b30: nop 
    goto label_0x1d3b54;                                        // 0x001d3b34: b 0x1d3b54
    s0 = s0 + 1;                                                // 0x001d3b38: addiu $s0, $s0, 1
label_0x1d3b3c:
    a2 = a2 + 1;                                                // 0x001d3b3c: addiu $a2, $a2, 1
    a0 = a0 + 0x10;                                             // 0x001d3b40: addiu $a0, $a0, 0x10
label_0x1d3b44:
    v1 = (a2 < 0x100) ? 1 : 0;                                  // 0x001d3b44: slti $v1, $a2, 0x100
    if (v1 != 0) goto label_0x1d3b14;                           // 0x001d3b48: bnez $v1, 0x1d3b14
    /* nop */                                                   // 0x001d3b4c: nop 
    s0 = s0 + 1;                                                // 0x001d3b50: addiu $s0, $s0, 1
label_0x1d3b54:
    v1 = (s0 < s1) ? 1 : 0;                                     // 0x001d3b54: slt $v1, $s0, $s1
    if (v1 != 0) goto label_0x1d3b04;                           // 0x001d3b58: bnez $v1, 0x1d3b04
    a0 = 0x33 << 16;                                            // 0x001d3b5c: lui $a0, 0x33
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d3b64: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d3b68: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d3b6c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d3b70: jr $ra
    sp = sp + 0x40;                                             // 0x001d3b74: addiu $sp, $sp, 0x40
}