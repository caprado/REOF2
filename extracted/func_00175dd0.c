void func_00175dd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00175dd0: addiu $sp, $sp, -0x10
    v1 = a0 + 0xe4;                                             // 0x00175dd4: addiu $v1, $a0, 0xe4
    a0 = a0 + 0xbc;                                             // 0x00175ddc: addiu $a0, $a0, 0xbc
    v0 = g_002100e4;  // Global at 0x002100e4                   // 0x00175de4: lw $v0, 0($v1)
    if (v0 == 0) goto label_0x175e00;                           // 0x00175de8: beqz $v0, 0x175e00
    *(uint32_t*)(a2) = v0;                                      // 0x00175dec: sw $v0, 0($a2)
    a2 = g_00210108;  // Global at 0x00210108                   // 0x00175df0: lw $a2, 0x24($v1)
    goto label_0x175e20;                                        // 0x00175df4: b 0x175e20
    s0 = g_00210104;  // Global at 0x00210104                   // 0x00175df8: lw $s0, 0x20($v1)
    /* nop */                                                   // 0x00175dfc: nop 
label_0x175e00:
    v0 = g_002100dc;  // Global at 0x002100dc                   // 0x00175e00: lw $v0, 0x20($a0)
    if (v0 < 0) goto label_0x175e18;                            // 0x00175e04: bltz $v0, 0x175e18
    goto label_0x175e20;                                        // 0x00175e0c: b 0x175e20
    a2 = g_002100e0;  // Global at 0x002100e0                   // 0x00175e10: lw $a2, 0x24($a0)
    /* nop */                                                   // 0x00175e14: nop 
label_0x175e18:
    goto label_0x175e38;                                        // 0x00175e18: b 0x175e38
    v0 = -1;                                                    // 0x00175e1c: addiu $v0, $zero, -1
label_0x175e20:
    func_0015b740();  // 15b740                                // 0x00175e20: jal 0x15b740
    v1 = 0x21 << 16;                                            // 0x00175e28: lui $v1, 0x21
    a0 = 0x21 << 16;                                            // 0x00175e2c: lui $a0, 0x21
    g_002157d0 = s0;  // Global at 0x002157d0                   // 0x00175e30: sw $s0, 0x57d0($v1)
    g_002157d4 = v0;  // Global at 0x002157d4                   // 0x00175e34: sw $v0, 0x57d4($a0)
label_0x175e38:
    return;                                                     // 0x00175e40: jr $ra
    sp = sp + 0x10;                                             // 0x00175e44: addiu $sp, $sp, 0x10
}