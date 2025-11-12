void func_00175d80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00175d80: addiu $sp, $sp, -0x10
    v0 = -1;                                                    // 0x00175d84: addiu $v0, $zero, -1
    v1 = *(int32_t*)((s0) + 0x118);                             // 0x00175d94: lw $v1, 0x118($s0)
    if (v1 < 0) goto label_0x175dbc;                            // 0x00175d98: bltz $v1, 0x175dbc
    func_0015b7b0();  // 0x15b740                                // 0x00175da0: jal 0x15b740
    a2 = 0x57e4;                                                // 0x00175da4: addiu $a2, $zero, 0x57e4
    a1 = 0x21 << 16;                                            // 0x00175da8: lui $a1, 0x21
    a0 = *(int32_t*)((s0) + 0x118);                             // 0x00175dac: lw $a0, 0x118($s0)
    v1 = 0x21 << 16;                                            // 0x00175db0: lui $v1, 0x21
    g_002157cc = v0;  // Global at 0x002157cc                   // 0x00175db4: sw $v0, 0x57cc($v1)
    g_002157c8 = a0;  // Global at 0x002157c8                   // 0x00175db8: sw $a0, 0x57c8($a1)
label_0x175dbc:
    return;                                                     // 0x00175dc4: jr $ra
    sp = sp + 0x10;                                             // 0x00175dc8: addiu $sp, $sp, 0x10
}