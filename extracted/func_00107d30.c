/** @category: system/thread @status: complete @author: caprado */
void func_00107d30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00107d30: addiu $sp, $sp, -0x20
    ReferThreadStatus();  // 0x1141d0                           // 0x00107d40: jal 0x1141d0
    /* nop */                                                   // 0x00107d44: nop 
    v1 = 0x1f << 16;                                            // 0x00107d48: lui $v1, 0x1f
    s1 = v1 + 0x258;                                            // 0x00107d50: addiu $s1, $v1, 0x258
    v0 = 0x1f << 16;                                            // 0x00107d54: lui $v0, 0x1f
    a0 = v0 + 0x25c;                                            // 0x00107d58: addiu $a0, $v0, 0x25c
    v0 = g_001f0258;  // Global at 0x001f0258                   // 0x00107d5c: lw $v0, 0($s1)
    if (v0 != s0) goto label_0x107d78;                          // 0x00107d60: bne $v0, $s0, 0x107d78
    v0 = 0x1f << 16;                                            // 0x00107d64: lui $v0, 0x1f
    v0 = g_001f025c;  // Global at 0x001f025c                   // 0x00107d68: lw $v0, 0($a0)
    v0 = v0 + 1;                                                // 0x00107d6c: addiu $v0, $v0, 1
    goto label_0x107d98;                                        // 0x00107d70: b 0x107d98
    g_001f025c = v0;  // Global at 0x001f025c                   // 0x00107d74: sw $v0, 0($a0)
label_0x107d78:
    PollSema();  // 0x114320                                    // 0x00107d78: jal 0x114320
    a0 = g_001f0a71;  // Global at 0x001f0a71                   // 0x00107d7c: lw $a0, 0xa70($v0)
    v1 = 0x1f << 16;                                            // 0x00107d80: lui $v1, 0x1f
    g_001f0258 = s0;  // Global at 0x001f0258                   // 0x00107d84: sw $s0, 0($s1)
    v1 = v1 + 0x25c;                                            // 0x00107d88: addiu $v1, $v1, 0x25c
    v0 = g_001f025c;  // Global at 0x001f025c                   // 0x00107d8c: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x00107d90: addiu $v0, $v0, 1
    g_001f025c = v0;  // Global at 0x001f025c                   // 0x00107d94: sw $v0, 0($v1)
label_0x107d98:
    return;                                                     // 0x00107da4: jr $ra
    sp = sp + 0x20;                                             // 0x00107da8: addiu $sp, $sp, 0x20
}