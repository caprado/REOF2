void func_0012bcd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x12bcd8:
    sp = sp + -0x10;                                            // 0x0012bcd8: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x0012bcdc: lui $v0, 0x1f
    v1 = 1;                                                     // 0x0012bce4: addiu $v1, $zero, 1
    v0 = v0 + 0x6a9c;                                           // 0x0012bce8: addiu $v0, $v0, 0x6a9c
    g_001f6a9c = v1;  // Global at 0x001f6a9c                   // 0x0012bcf0: sw $v1, 0($v0)
    return func_0012adb0();  // Tail call                        // 0x0012bcf4: j 0x12ad98
    sp = sp + 0x10;                                             // 0x0012bcf8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012bcfc: nop 
label_0x12bd00:
    sp = sp + -0x10;                                            // 0x0012bd00: addiu $sp, $sp, -0x10
    func_0012bbd0();  // 12bbd0                                // 0x0012bd08: jal 0x12bbd0
    /* nop */                                                   // 0x0012bd0c: nop 
    goto label_0x12bcd8;                                        // 0x0012bd14: j 0x12bcd8
    sp = sp + 0x10;                                             // 0x0012bd18: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012bd1c: nop 
    sp = sp + -0x10;                                            // 0x0012bd20: addiu $sp, $sp, -0x10
    goto label_0x12bd00;                                        // 0x0012bd2c: j 0x12bd00
    sp = sp + 0x10;                                             // 0x0012bd30: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012bd34: nop 
    sp = sp + -0x10;                                            // 0x0012bd38: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x0012bd3c: lui $v0, 0x1f
    s0 = v0 + 0x6b58;                                           // 0x0012bd44: addiu $s0, $v0, 0x6b58
    v1 = g_001f6b58;  // Global at 0x001f6b58                   // 0x0012bd48: lw $v1, 0($s0)
    if (v1 != 0) goto label_0x12bd6c;                           // 0x0012bd4c: bnez $v1, 0x12bd6c
    v0 = 1;                                                     // 0x0012bd54: addiu $v0, $zero, 1
    func_001328c8();  // 1328c8                                // 0x0012bd58: jal 0x1328c8
    g_001f6b58 = v0;  // Global at 0x001f6b58                   // 0x0012bd5c: sw $v0, 0($s0)
    func_00129ce0();  // 129ce0                                // 0x0012bd60: jal 0x129ce0
    /* nop */                                                   // 0x0012bd64: nop 
    g_001f6b58 = 0;  // Global at 0x001f6b58                    // 0x0012bd68: sw $zero, 0($s0)
label_0x12bd6c:
    return;                                                     // 0x0012bd78: jr $ra
    sp = sp + 0x10;                                             // 0x0012bd7c: addiu $sp, $sp, 0x10
}