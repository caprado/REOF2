void func_001c7c00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_6c;
    
    sp = sp + -0x70;                                            // 0x001c7c00: addiu $sp, $sp, -0x70
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c7c0c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c7c1c: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c7c24: jal 0x1c7770
    s1 = 0x31 << 16;                                            // 0x001c7c2c: lui $s1, 0x31
    s1 = s1 + 0x669c;                                           // 0x001c7c34: addiu $s1, $s1, 0x669c
    goto label_0x1c7d20;                                        // 0x001c7c38: b 0x1c7d20
    g_0031669c = s0;  // Global at 0x0031669c                   // 0x001c7c3c: sh $s0, 0($s1)
label_0x1c7c40:
    at = (s0 < 0x3cb) ? 1 : 0;                                  // 0x001c7c48: slti $at, $s0, 0x3cb
    if (at != 0) goto label_0x1c7c60;                           // 0x001c7c4c: bnez $at, 0x1c7c60
    /* nop */                                                   // 0x001c7c50: nop 
    goto label_0x1c7c60;                                        // 0x001c7c54: b 0x1c7c60
    s0 = 0x3ca;                                                 // 0x001c7c58: addiu $s0, $zero, 0x3ca
    /* nop */                                                   // 0x001c7c5c: nop 
label_0x1c7c60:
    a0 = s1 + 4;                                                // 0x001c7c68: addiu $a0, $s1, 4
    func_00107b68();  // 0x107ab8                                // 0x001c7c70: jal 0x107ab8
    g_0031669e = s0;  // Global at 0x0031669e                   // 0x001c7c74: sh $s0, 2($s1)
    at = 0x31 << 16;                                            // 0x001c7c7c: lui $at, 0x31
    g_00316680 = 0;  // Global at 0x00316680                    // 0x001c7c84: sw $zero, 0x6680($at)
    a1 = v0 + 0x26;                                             // 0x001c7c88: addiu $a1, $v0, 0x26
    at = 0x31 << 16;                                            // 0x001c7c8c: lui $at, 0x31
    a0 = 0x10;                                                  // 0x001c7c94: addiu $a0, $zero, 0x10
    func_001c7670();  // 0x1c75b0                                // 0x001c7c98: jal 0x1c75b0
    g_00316684 = 0;  // Global at 0x00316684                    // 0x001c7c9c: sw $zero, 0x6684($at)
    if (s2 >= 0) goto label_0x1c7cc0;                           // 0x001c7ca8: bgez $s2, 0x1c7cc0
    /* nop */                                                   // 0x001c7cac: nop 
    func_001c7790();  // 0x1c7780                                // 0x001c7cb0: jal 0x1c7780
    /* nop */                                                   // 0x001c7cb4: nop 
    goto label_0x1c7d48;                                        // 0x001c7cb8: b 0x1c7d48
label_0x1c7cc0:
    v0 = s3 - s0;                                               // 0x001c7cc0: subu $v0, $s3, $s0
    if (s3 <= 0) goto label_0x1c7d38;                           // 0x001c7cd4: blez $s3, 0x1c7d38
    s4 = s4 + v0;                                               // 0x001c7cd8: addu $s4, $s4, $v0
    goto label_0x1c7d10;                                        // 0x001c7cdc: b 0x1c7d10
    local_6c = 0;                                               // 0x001c7ce0: sw $zero, 0x6c($sp)
    /* nop */                                                   // 0x001c7ce4: nop 
label_0x1c7ce8:
    v0 = local_6c;                                              // 0x001c7ce8: lw $v0, 0x6c($sp)
    v0 = v0 + 1;                                                // 0x001c7cec: addiu $v0, $v0, 1
    local_6c = v0;                                              // 0x001c7cf0: sw $v0, 0x6c($sp)
    /* nop */                                                   // 0x001c7cf4: nop 
    /* nop */                                                   // 0x001c7cf8: nop 
    /* nop */                                                   // 0x001c7cfc: nop 
    /* nop */                                                   // 0x001c7d00: nop 
    /* nop */                                                   // 0x001c7d04: nop 
    /* nop */                                                   // 0x001c7d08: nop 
    /* nop */                                                   // 0x001c7d0c: nop 
label_0x1c7d10:
    v0 = local_6c;                                              // 0x001c7d10: lw $v0, 0x6c($sp)
    v0 = (v0 < 0x2710) ? 1 : 0;                                 // 0x001c7d14: slti $v0, $v0, 0x2710
    if (v0 != 0) goto label_0x1c7ce8;                           // 0x001c7d18: bnez $v0, 0x1c7ce8
    /* nop */                                                   // 0x001c7d1c: nop 
label_0x1c7d20:
    v0 = (0 < v0) ? 1 : 0;                                      // 0x001c7d28: slt $v0, $zero, $v0
    if (v0 != 0) goto label_0x1c7c40;                           // 0x001c7d2c: bnez $v0, 0x1c7c40
    /* nop */                                                   // 0x001c7d30: nop 
    /* nop */                                                   // 0x001c7d34: nop 
label_0x1c7d38:
    func_001c7790();  // 0x1c7780                                // 0x001c7d38: jal 0x1c7780
    /* nop */                                                   // 0x001c7d3c: nop 
    /* nop */                                                   // 0x001c7d44: nop 
label_0x1c7d48:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001c7d4c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c7d54: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c7d58: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c7d5c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c7d60: jr $ra
    sp = sp + 0x70;                                             // 0x001c7d64: addiu $sp, $sp, 0x70
}