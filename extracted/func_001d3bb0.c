void func_001d3bb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d3bb0: addiu $sp, $sp, -0x20
    a1 = 1;                                                     // 0x001d3bb4: addiu $a1, $zero, 1
    s0 = 0x33 << 16;                                            // 0x001d3bc0: lui $s0, 0x33
    s0 = s0 + -0x1330;                                          // 0x001d3bc4: addiu $s0, $s0, -0x1330
    goto label_0x1d3c04;                                        // 0x001d3bc8: b 0x1d3c04
    s0 = s0 + 0x10;                                             // 0x001d3bcc: addiu $s0, $s0, 0x10
label_0x1d3bd0:
    v1 = g_0032ece0;  // Global at 0x0032ece0                   // 0x001d3bd0: lw $v1, 0($s0)
    if (v1 != a0) goto label_0x1d3bfc;                          // 0x001d3bd4: bne $v1, $a0, 0x1d3bfc
    /* nop */                                                   // 0x001d3bd8: nop 
    func_001d34f0();  // 0x1d34a0                                // 0x001d3bdc: jal 0x1d34a0
    func_00107d30();  // 0x107c70                                // 0x001d3bec: jal 0x107c70
    a2 = 0x10;                                                  // 0x001d3bf0: addiu $a2, $zero, 0x10
    goto label_0x1d3c14;                                        // 0x001d3bf4: b 0x1d3c14
label_0x1d3bfc:
    a1 = a1 + 1;                                                // 0x001d3bfc: addiu $a1, $a1, 1
    s0 = s0 + 0x10;                                             // 0x001d3c00: addiu $s0, $s0, 0x10
label_0x1d3c04:
    v1 = (a1 < 0x100) ? 1 : 0;                                  // 0x001d3c04: slti $v1, $a1, 0x100
    if (v1 != 0) goto label_0x1d3bd0;                           // 0x001d3c08: bnez $v1, 0x1d3bd0
    /* nop */                                                   // 0x001d3c0c: nop 
label_0x1d3c14:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d3c14: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d3c18: jr $ra
    sp = sp + 0x20;                                             // 0x001d3c1c: addiu $sp, $sp, 0x20
}