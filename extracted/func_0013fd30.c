void func_0013fd30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013fd30: addiu $sp, $sp, -0x10
    v1 = 0x21 << 16;                                            // 0x0013fd34: lui $v1, 0x21
    v1 = v1 + -0xd70;                                           // 0x0013fd3c: addiu $v1, $v1, -0xd70
    v0 = g_0020f290;  // Global at 0x0020f290                   // 0x0013fd40: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0013fd44: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x13fd70;                           // 0x0013fd48: bnez $v0, 0x13fd70
    g_0020f290 = v0;  // Global at 0x0020f290                   // 0x0013fd4c: sw $v0, 0($v1)
    a0 = 0x21 << 16;                                            // 0x0013fd50: lui $a0, 0x21
    a0 = a0 + -0xd68;                                           // 0x0013fd5c: addiu $a0, $a0, -0xd68
    a2 = 0xc00;                                                 // 0x0013fd60: addiu $a2, $zero, 0xc00
    return func_00107d30();  // Tail call                        // 0x0013fd64: j 0x107c70
    sp = sp + 0x10;                                             // 0x0013fd68: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013fd6c: nop 
label_0x13fd70:
    return;                                                     // 0x0013fd74: jr $ra
    sp = sp + 0x10;                                             // 0x0013fd78: addiu $sp, $sp, 0x10
}