void func_00119f30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00119f30: addiu $sp, $sp, -0x40
    a0 = 9;                                                     // 0x00119f44: addiu $a0, $zero, 9
    func_00118330();  // 118330                                // 0x00119f48: jal 0x118330
    v1 = 0x1f << 16;                                            // 0x00119f50: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x00119f54: lw $v0, 0x3dc($v1)
    if (v0 != 0) goto label_0x119f68;                           // 0x00119f58: bnez $v0, 0x119f68
    /* nop */                                                   // 0x00119f5c: nop 
    func_00118460();  // 118460                                // 0x00119f60: jal 0x118460
    /* nop */                                                   // 0x00119f64: nop 
label_0x119f68:
    func_00118360();  // 118360                                // 0x00119f68: jal 0x118360
    /* nop */                                                   // 0x00119f6c: nop 
    func_00117e30();  // 117e30                                // 0x00119f70: jal 0x117e30
    /* nop */                                                   // 0x00119f74: nop 
    if (s2 != 0) goto label_0x119f8c;                           // 0x00119f7c: bnez $s2, 0x119f8c
    goto label_0x119fe0;                                        // 0x00119f84: b 0x119fe0
    v0 = -0x13;                                                 // 0x00119f88: addiu $v0, $zero, -0x13
label_0x119f8c:
    func_001197e8();  // 1197e8                                // 0x00119f8c: jal 0x1197e8
    a1 = 9;                                                     // 0x00119f90: addiu $a1, $zero, 9
    if (s1 >= 0) goto label_0x119fb4;                           // 0x00119f98: bgez $s1, 0x119fb4
    s0 = 0x1f << 16;                                            // 0x00119f9c: lui $s0, 0x1f
    PollSema();  // 0x114320                                    // 0x00119fa0: jal 0x114320
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00119fa4: lw $a0, 0x3e8($s0)
    *(uint32_t*)((s2) + 4) = 0;                                 // 0x00119fa8: sw $zero, 4($s2)
    goto label_0x119fd4;                                        // 0x00119fac: b 0x119fd4
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00119fb0: lw $a0, 0x3e8($s0)
label_0x119fb4:
    PollSema();  // 0x114320                                    // 0x00119fb4: jal 0x114320
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00119fb8: lw $a0, 0x3e8($s0)
    v1 = 0x25 << 16;                                            // 0x00119fbc: lui $v1, 0x25
    *(uint32_t*)(s2) = s1;                                      // 0x00119fc0: sw $s1, 0($s2)
    v1 = v1 + -0x940;                                           // 0x00119fc4: addiu $v1, $v1, -0x940
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00119fc8: lw $a0, 0x3e8($s0)
    v1 = s2 - v1;                                               // 0x00119fcc: subu $v1, $s2, $v1
    s1 = v1 >> 4;                                               // 0x00119fd0: sra $s1, $v1, 4
label_0x119fd4:
    iSignalSema();  // 0x114300                                 // 0x00119fd4: jal 0x114300
    /* nop */                                                   // 0x00119fd8: nop 
label_0x119fe0:
    return;                                                     // 0x00119ff0: jr $ra
    sp = sp + 0x40;                                             // 0x00119ff4: addiu $sp, $sp, 0x40
}