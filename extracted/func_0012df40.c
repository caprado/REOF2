void func_0012df40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012df40: addiu $sp, $sp, -0x10
    func_0012ddf8();  // 12ddf8                                // 0x0012df4c: jal 0x12ddf8
    if (t0 == 0) goto label_0x12dfcc;                           // 0x0012df58: beqz $t0, 0x12dfcc
    v1 = 0x20 << 16;                                            // 0x0012df5c: lui $v1, 0x20
    a0 = v1 + 0x5a0;                                            // 0x0012df60: addiu $a0, $v1, 0x5a0
    v0 = g_002005a0;  // Global at 0x002005a0                   // 0x0012df64: lb $v0, 0($a0)
    if (v0 == 0) goto label_0x12dfa8;                           // 0x0012df68: beqz $v0, 0x12dfa8
label_0x12df78:
    a3 = a3 + 1;                                                // 0x0012df78: addiu $a3, $a3, 1
    a2 = a2 + 0x90;                                             // 0x0012df7c: addiu $a2, $a2, 0x90
    v1 = (a3 < 0x10) ? 1 : 0;                                   // 0x0012df80: slti $v1, $a3, 0x10
    if (v1 == 0) goto label_0x12dfac;                           // 0x0012df84: beqz $v1, 0x12dfac
    a1 = a1 + 0x90;                                             // 0x0012df88: addiu $a1, $a1, 0x90
    v0 = *(int8_t*)(a2);                                        // 0x0012df8c: lb $v0, 0($a2)
    /* nop */                                                   // 0x0012df90: nop 
    if (v0 != 0) goto label_0x12df78;                           // 0x0012df94: bnez $v0, 0x12df78
    goto label_0x12dfb0;                                        // 0x0012df9c: b 0x12dfb0
    g_002005b4 = s0;  // Global at 0x002005b4                   // 0x0012dfa0: sw $s0, 0x14($a0)
    /* nop */                                                   // 0x0012dfa4: nop 
label_0x12dfa8:
    v1 = 1;                                                     // 0x0012dfa8: addiu $v1, $zero, 1
label_0x12dfac:
    g_002005b4 = s0;  // Global at 0x002005b4                   // 0x0012dfac: sw $s0, 0x14($a0)
label_0x12dfb0:
    if (v1 == 0) goto label_0x12dfc8;                           // 0x0012dfb0: beqz $v1, 0x12dfc8
    g_00200628 = t0;  // Global at 0x00200628                   // 0x0012dfb4: sw $t0, 0x88($a0)
    v1 = 1;                                                     // 0x0012dfb8: addiu $v1, $zero, 1
    goto label_0x12dfcc;                                        // 0x0012dfc0: b 0x12dfcc
    g_002005a0 = v1;  // Global at 0x002005a0                   // 0x0012dfc4: sb $v1, 0($a0)
label_0x12dfc8:
label_0x12dfcc:
    return;                                                     // 0x0012dfd4: jr $ra
    sp = sp + 0x10;                                             // 0x0012dfd8: addiu $sp, $sp, 0x10
}