/** @category: game/resource @status: complete @author: caprado */
void func_001d3d20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = (a1 < 6) ? 1 : 0;                                      // 0x001d3d20: slti $at, $a1, 6
    if (at != 0) goto label_0x1d3d34;                           // 0x001d3d24: bnez $at, 0x1d3d34
    v1 = a1 << 1;                                               // 0x001d3d28: sll $v1, $a1, 1
    goto label_0x1d3d90;                                        // 0x001d3d2c: b 0x1d3d90
label_0x1d3d34:
    v0 = -1;                                                    // 0x001d3d34: addiu $v0, $zero, -1
    v1 = a0 + v1;                                               // 0x001d3d38: addu $v1, $a0, $v1
    a0 = *(int16_t*)(v1);                                       // 0x001d3d3c: lh $a0, 0($v1)
    if (a0 != v0) goto label_0x1d3d50;                          // 0x001d3d40: bne $a0, $v0, 0x1d3d50
    a2 = 0x33 << 16;                                            // 0x001d3d44: lui $a2, 0x33
    goto label_0x1d3d90;                                        // 0x001d3d48: b 0x1d3d90
label_0x1d3d50:
    goto label_0x1d3d84;                                        // 0x001d3d54: b 0x1d3d84
    a2 = a2 + -0x1330;                                          // 0x001d3d58: addiu $a2, $a2, -0x1330
label_0x1d3d5c:
    v0 = g_0032ecd0;  // Global at 0x0032ecd0                   // 0x001d3d5c: lw $v0, 0($a2)
    if (v0 == 0) goto label_0x1d3d7c;                           // 0x001d3d60: beqz $v0, 0x1d3d7c
    /* nop */                                                   // 0x001d3d64: nop 
    v1 = g_0032ecd4;  // Global at 0x0032ecd4                   // 0x001d3d68: lw $v1, 4($a2)
    if (v1 != a0) goto label_0x1d3d7c;                          // 0x001d3d6c: bne $v1, $a0, 0x1d3d7c
    /* nop */                                                   // 0x001d3d70: nop 
    goto label_0x1d3d90;                                        // 0x001d3d74: b 0x1d3d90
    /* nop */                                                   // 0x001d3d78: nop 
label_0x1d3d7c:
    a1 = a1 + 1;                                                // 0x001d3d7c: addiu $a1, $a1, 1
    a2 = a2 + 0x10;                                             // 0x001d3d80: addiu $a2, $a2, 0x10
label_0x1d3d84:
    v0 = (a1 < 0x100) ? 1 : 0;                                  // 0x001d3d84: slti $v0, $a1, 0x100
    if (v0 != 0) goto label_0x1d3d5c;                           // 0x001d3d88: bnez $v0, 0x1d3d5c
label_0x1d3d90:
    return;                                                     // 0x001d3d90: jr $ra
    /* nop */                                                   // 0x001d3d94: nop 
}