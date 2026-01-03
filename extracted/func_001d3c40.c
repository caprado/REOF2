void func_001d3c40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d3c40: addiu $sp, $sp, -0x10
    func_001d3a90();  // 1d3a90                                // 0x001d3c4c: jal 0x1d3a90
    a0 = *(int32_t*)((gp) + -0x7ae4);                           // 0x001d3c50: lw $a0, -0x7ae4($gp)
    a0 = a2 + v0;                                               // 0x001d3c54: addu $a0, $a2, $v0
    a2 = 0x33 << 16;                                            // 0x001d3c5c: lui $a2, 0x33
    goto label_0x1d3c90;                                        // 0x001d3c60: b 0x1d3c90
    a2 = a2 + -0x1330;                                          // 0x001d3c64: addiu $a2, $a2, -0x1330
label_0x1d3c68:
    v0 = g_0032ecd0;  // Global at 0x0032ecd0                   // 0x001d3c68: lw $v0, 0($a2)
    if (v0 == 0) goto label_0x1d3c88;                           // 0x001d3c6c: beqz $v0, 0x1d3c88
    /* nop */                                                   // 0x001d3c70: nop 
    v1 = g_0032ecd4;  // Global at 0x0032ecd4                   // 0x001d3c74: lw $v1, 4($a2)
    if (v1 != a0) goto label_0x1d3c88;                          // 0x001d3c78: bne $v1, $a0, 0x1d3c88
    /* nop */                                                   // 0x001d3c7c: nop 
    goto label_0x1d3ca0;                                        // 0x001d3c80: b 0x1d3ca0
label_0x1d3c88:
    a1 = a1 + 1;                                                // 0x001d3c88: addiu $a1, $a1, 1
    a2 = a2 + 0x10;                                             // 0x001d3c8c: addiu $a2, $a2, 0x10
label_0x1d3c90:
    v0 = (a1 < 0x100) ? 1 : 0;                                  // 0x001d3c90: slti $v0, $a1, 0x100
    if (v0 != 0) goto label_0x1d3c68;                           // 0x001d3c94: bnez $v0, 0x1d3c68
label_0x1d3ca0:
    return;                                                     // 0x001d3ca0: jr $ra
    sp = sp + 0x10;                                             // 0x001d3ca4: addiu $sp, $sp, 0x10
}