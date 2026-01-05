void func_00188ec0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x00188ec0: addiu $sp, $sp, -0x30
    v0 = 0x28 << 16;                                            // 0x00188ec4: lui $v0, 0x28
    v1 = 0x28 << 16;                                            // 0x00188ecc: lui $v1, 0x28
    s0 = v0 + 0x12c0;                                           // 0x00188ed0: addiu $s0, $v0, 0x12c0
    g_002812c0 = a0;  // Global at 0x002812c0                   // 0x00188ed4: sw $a0, 0x12c0($v0)
    a1 = 0x8000 << 16;                                          // 0x00188ed8: lui $a1, 0x8000
    a0 = v1 + 0x1248;                                           // 0x00188ee0: addiu $a0, $v1, 0x1248
    local_0 = 0;                                                // 0x00188ee4: sw $zero, 0($sp)
    a1 = a1 | 0x1315;                                           // 0x00188ee8: ori $a1, $a1, 0x1315
    t0 = 0x280;                                                 // 0x00188ef4: addiu $t0, $zero, 0x280
    t2 = 0x280;                                                 // 0x00188efc: addiu $t2, $zero, 0x280
    func_001176a8();  // 1176a8                                // 0x00188f00: jal 0x1176a8
    if (v0 >= 0) goto label_0x188f20;                           // 0x00188f08: bgezl $v0, 0x188f20
    v0 = g_002812c4;  // Global at 0x002812c4                   // 0x00188f0c: lw $v0, 4($s0)
    a0 = 0x23 << 16;                                            // 0x00188f10: lui $a0, 0x23
    func_001896c8();  // 1896c8                                // 0x00188f14: jal 0x1896c8
    a0 = &str_0022a148;  // "sceDbcResetSocket: rpc error\n"    // 0x00188f18: addiu $a0, $a0, -0x5eb8
label_0x188f20:
    return;                                                     // 0x00188f28: jr $ra
    sp = sp + 0x30;                                             // 0x00188f2c: addiu $sp, $sp, 0x30
}