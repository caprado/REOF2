/** @category: game/resource @status: complete @author: caprado */
void func_001d3cb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d3cb0: addiu $sp, $sp, -0x10
    func_001d3ae0();  // 0x1d3a90                                // 0x001d3cb8: jal 0x1d3a90
    /* nop */                                                   // 0x001d3cbc: nop 
    a2 = 0x33 << 16;                                            // 0x001d3cc0: lui $a2, 0x33
    a2 = a2 + -0x1330;                                          // 0x001d3cc8: addiu $a2, $a2, -0x1330
    goto label_0x1d3cfc;                                        // 0x001d3ccc: b 0x1d3cfc
label_0x1d3cd4:
    v0 = g_0032ecd0;  // Global at 0x0032ecd0                   // 0x001d3cd4: lw $v0, 0($a2)
    if (v0 == 0) goto label_0x1d3cf4;                           // 0x001d3cd8: beqz $v0, 0x1d3cf4
    /* nop */                                                   // 0x001d3cdc: nop 
    v1 = g_0032ecd4;  // Global at 0x0032ecd4                   // 0x001d3ce0: lw $v1, 4($a2)
    if (v1 != a0) goto label_0x1d3cf4;                          // 0x001d3ce4: bne $v1, $a0, 0x1d3cf4
    /* nop */                                                   // 0x001d3ce8: nop 
    goto label_0x1d3d0c;                                        // 0x001d3cec: b 0x1d3d0c
label_0x1d3cf4:
    a1 = a1 + 1;                                                // 0x001d3cf4: addiu $a1, $a1, 1
    a2 = a2 + 0x10;                                             // 0x001d3cf8: addiu $a2, $a2, 0x10
label_0x1d3cfc:
    v0 = (a1 < 0x100) ? 1 : 0;                                  // 0x001d3cfc: slti $v0, $a1, 0x100
    if (v0 != 0) goto label_0x1d3cd4;                           // 0x001d3d00: bnez $v0, 0x1d3cd4
label_0x1d3d0c:
    return;                                                     // 0x001d3d0c: jr $ra
    sp = sp + 0x10;                                             // 0x001d3d10: addiu $sp, $sp, 0x10
}