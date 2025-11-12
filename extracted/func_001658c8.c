void func_001658c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_20, local_28, local_30, local_34;
    
    sp = sp + -0x70;                                            // 0x001658c8: addiu $sp, $sp, -0x70
    func_00131c20();  // 0x131bb8                                // 0x001658f0: jal 0x131bb8
    a1 = sp + 0x30;                                             // 0x001658fc: addiu $a1, $sp, 0x30
    a2 = sp + 0x34;                                             // 0x00165900: addiu $a2, $sp, 0x34
    v1 = 0x21 << 16;                                            // 0x00165904: lui $v1, 0x21
    func_00132118();  // 0x131e20                                // 0x00165908: jal 0x131e20
    g_00215568 = v0;  // Global at 0x00215568                   // 0x0016590c: sw $v0, 0x5568($v1)
    v1 = local_34;                                              // 0x00165910: lw $v1, 0x34($sp)
    v0 = local_30;                                              // 0x00165914: lw $v0, 0x30($sp)
    func_0017e658();  // 0x17e530                                // 0x0016591c: jal 0x17e530
    func_0017e6e0();  // 0x17e658                                // 0x00165924: jal 0x17e658
    a2 = sp + 0x10;                                             // 0x00165930: addiu $a2, $sp, 0x10
    a3 = sp + 0x20;                                             // 0x00165938: addiu $a3, $sp, 0x20
    func_00177fd8();  // 0x177b70                                // 0x0016593c: jal 0x177b70
    v0 = local_20;                                              // 0x00165944: lw $v0, 0x20($sp)
    v1 = local_28;                                              // 0x00165948: lw $v1, 0x28($sp)
    *(uint32_t*)(s2) = v0;                                      // 0x0016594c: sw $v0, 0($s2)
    *(uint32_t*)(s3) = v1;                                      // 0x00165954: sw $v1, 0($s3)
    return;                                                     // 0x00165968: jr $ra
    sp = sp + 0x70;                                             // 0x0016596c: addiu $sp, $sp, 0x70
}