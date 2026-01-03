void func_00129cc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129cc8: addiu $sp, $sp, -0x10
    return func_00135d38();  // Tail call                        // 0x00129cd4: j 0x135c78
    sp = sp + 0x10;                                             // 0x00129cd8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00129cdc: nop 
    sp = sp + -0x10;                                            // 0x00129ce0: addiu $sp, $sp, -0x10
    func_001261a0();  // 1261a0                                // 0x00129cec: jal 0x1261a0
    /* nop */                                                   // 0x00129cf0: nop 
    v0 = 0x1f << 16;                                            // 0x00129cf4: lui $v0, 0x1f
    s0 = v0 + 0x5990;                                           // 0x00129cf8: addiu $s0, $v0, 0x5990
    v1 = g_001f5990;  // Global at 0x001f5990                   // 0x00129cfc: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x129d18;                           // 0x00129d00: beqz $v1, 0x129d18
    return func_001261d0();  // Tail call                        // 0x00129d0c: j 0x1261b8
    sp = sp + 0x10;                                             // 0x00129d10: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00129d14: nop 
label_0x129d18:
    v0 = 1;                                                     // 0x00129d18: addiu $v0, $zero, 1
    func_001261b8();  // 1261b8                                // 0x00129d1c: jal 0x1261b8
    g_001f5990 = v0;  // Global at 0x001f5990                   // 0x00129d20: sw $v0, 0($s0)
    func_00130a08();  // 130a08                                // 0x00129d24: jal 0x130a08
    /* nop */                                                   // 0x00129d28: nop 
    v0 = 2;                                                     // 0x00129d2c: addiu $v0, $zero, 2
    func_00135bb0();  // 135bb0                                // 0x00129d30: jal 0x135bb0
    g_001f5990 = v0;  // Global at 0x001f5990                   // 0x00129d34: sw $v0, 0($s0)
    v0 = 3;                                                     // 0x00129d38: addiu $v0, $zero, 3
    func_00137a40();  // 137a40                                // 0x00129d3c: jal 0x137a40
    g_001f5990 = v0;  // Global at 0x001f5990                   // 0x00129d40: sw $v0, 0($s0)
    v0 = 4;                                                     // 0x00129d44: addiu $v0, $zero, 4
    func_00135bb0();  // 135bb0                                // 0x00129d48: jal 0x135bb0
    g_001f5990 = v0;  // Global at 0x001f5990                   // 0x00129d4c: sw $v0, 0($s0)
    v0 = 5;                                                     // 0x00129d50: addiu $v0, $zero, 5
    func_00130a08();  // 130a08                                // 0x00129d54: jal 0x130a08
    g_001f5990 = v0;  // Global at 0x001f5990                   // 0x00129d58: sw $v0, 0($s0)
    v0 = 6;                                                     // 0x00129d5c: addiu $v0, $zero, 6
    func_00129720();  // 129720                                // 0x00129d60: jal 0x129720
    g_001f5990 = v0;  // Global at 0x001f5990                   // 0x00129d64: sw $v0, 0($s0)
    g_001f5990 = 0;  // Global at 0x001f5990                    // 0x00129d68: sw $zero, 0($s0)
    return;                                                     // 0x00129d74: jr $ra
    sp = sp + 0x10;                                             // 0x00129d78: addiu $sp, $sp, 0x10
}