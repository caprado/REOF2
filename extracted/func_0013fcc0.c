void func_0013fcc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013fcc0: addiu $sp, $sp, -0x10
    a0 = 0x22 << 16;                                            // 0x0013fcc4: lui $a0, 0x22
    a0 = &str_00226308;  // "\nSJRMT Ver 1.01 Build:Jul 28 2003 17:49:51\n" // 0x0013fccc: addiu $a0, $a0, 0x6308
    return func_0013ef48();  // Tail call                       // 0x0013fcd4: j 0x13ef48
    sp = sp + 0x10;                                             // 0x0013fcd8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013fcdc: nop 
    sp = sp + -0x10;                                            // 0x0013fce0: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x0013fce4: lui $v0, 0x21
    s0 = v0 + -0xd70;                                           // 0x0013fcec: addiu $s0, $v0, -0xd70
    v0 = g_0020f290;  // Global at 0x0020f290                   // 0x0013fcf0: lw $v0, 0($s0)
    if (v0 != 0) goto label_0x13fd14;                           // 0x0013fcf4: bnez $v0, 0x13fd14
    a0 = 0x21 << 16;                                            // 0x0013fcfc: lui $a0, 0x21
    a0 = a0 + -0xd68;                                           // 0x0013fd04: addiu $a0, $a0, -0xd68
    func_00107c70();  // 107c70                                // 0x0013fd08: jal 0x107c70
    a2 = 0xc00;                                                 // 0x0013fd0c: addiu $a2, $zero, 0xc00
    v0 = g_0020f290;  // Global at 0x0020f290                   // 0x0013fd10: lw $v0, 0($s0)
label_0x13fd14:
    v0 = v0 + 1;                                                // 0x0013fd14: addiu $v0, $v0, 1
    g_0020f290 = v0;  // Global at 0x0020f290                   // 0x0013fd1c: sw $v0, 0($s0)
    return;                                                     // 0x0013fd24: jr $ra
    sp = sp + 0x10;                                             // 0x0013fd28: addiu $sp, $sp, 0x10
}