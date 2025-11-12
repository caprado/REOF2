void func_00169728() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00169728: addiu $sp, $sp, -0x20
    s0 = 0x21 << 16;                                            // 0x00169734: lui $s0, 0x21
    s0 = s0 + 0x5588;                                           // 0x00169738: addiu $s0, $s0, 0x5588
    a2 = 0x89;                                                  // 0x00169740: addiu $a2, $zero, 0x89
    func_00156058();  // 0x155f90                                // 0x0016974c: jal 0x155f90
    a1 = 0x23 << 16;                                            // 0x00169754: lui $a1, 0x23
    a2 = 0x190;                                                 // 0x00169758: addiu $a2, $zero, 0x190
    a1 = a1 + -0x6e50;                                          // 0x0016975c: addiu $a1, $a1, -0x6e50
    func_00155db0();  // 0x155b20                                // 0x00169760: jal 0x155b20
    g_00215720 = 0;  // Global at 0x00215720                    // 0x00169778: sw $zero, 0x198($s0)
    func_001698b8();  // 0x1698a0                                // 0x0016977c: jal 0x1698a0
    a0 = s0 + 0x19c;                                            // 0x00169780: addiu $a0, $s0, 0x19c
    a0 = s0 + 0x1b0;                                            // 0x00169784: addiu $a0, $s0, 0x1b0
    func_00175708();  // 0x1756f8                                // 0x00169788: jal 0x1756f8
    a1 = *(int32_t*)((s1) + 4);                                 // 0x0016978c: lw $a1, 4($s1)
    func_001663d8();  // 0x1663d0                                // 0x00169790: jal 0x1663d0
    a0 = s0 + 0x1bc;                                            // 0x00169794: addiu $a0, $s0, 0x1bc
    func_001697f8();  // 0x1697e8                                // 0x00169798: jal 0x1697e8
    v0 = 7;                                                     // 0x001697a0: addiu $v0, $zero, 7
    s0 = s0 + 0x220;                                            // 0x001697a4: addiu $s0, $s0, 0x220
label_0x1697a8:
    v0 = v0 + -1;                                               // 0x001697a8: addiu $v0, $v0, -1
    g_002157a8 = 0;  // Global at 0x002157a8                    // 0x001697ac: sw $zero, 0($s0)
    /* nop */                                                   // 0x001697b0: nop 
    /* nop */                                                   // 0x001697b4: nop 
    /* nop */                                                   // 0x001697b8: nop 
    if (v0 >= 0) goto label_0x1697a8;                           // 0x001697bc: bgez $v0, 0x1697a8
    s0 = s0 + -4;                                               // 0x001697c0: addiu $s0, $s0, -4
    a1 = *(int32_t*)(s1);                                       // 0x001697c4: lw $a1, 0($s1)
    a0 = 0x21 << 16;                                            // 0x001697c8: lui $a0, 0x21
    func_00177208();  // 0x177170                                // 0x001697cc: jal 0x177170
    a0 = a0 + 0x5748;                                           // 0x001697d0: addiu $a0, $a0, 0x5748
    return;                                                     // 0x001697e0: jr $ra
    sp = sp + 0x20;                                             // 0x001697e4: addiu $sp, $sp, 0x20
}