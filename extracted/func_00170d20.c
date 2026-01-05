void func_00170d20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00170d20: addiu $sp, $sp, -0x10
    PollSema();  // 0x114320                                    // 0x00170d30: jal 0x114320
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00170d34: lw $a0, 0x40($s0)
    *(uint32_t*)((s0) + 0x44) = 0;                              // 0x00170d38: sw $zero, 0x44($s0)
    func_00170718();  // 170718                                // 0x00170d3c: jal 0x170718
    a0 = 5;                                                     // 0x00170d40: addiu $a0, $zero, 5
    v0 = 0x1000 << 16;                                          // 0x00170d44: lui $v0, 0x1000
    v0 = v0 | 0xb410;                                           // 0x00170d48: ori $v0, $v0, 0xb410
    a0 = 0x1000 << 16;                                          // 0x00170d4c: lui $a0, 0x1000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00170d50: lw $v1, 0($v0)
    a0 = a0 | 0xb430;                                           // 0x00170d54: ori $a0, $a0, 0xb430
    a1 = 0x1000 << 16;                                          // 0x00170d58: lui $a1, 0x1000
    a2 = 0x1000 << 16;                                          // 0x00170d5c: lui $a2, 0x1000
    *(uint32_t*)((s0) + 0x1c) = v1;                             // 0x00170d60: sw $v1, 0x1c($s0)
    a1 = a1 | 0xb420;                                           // 0x00170d64: ori $a1, $a1, 0xb420
    a2 = a2 | 0xb400;                                           // 0x00170d68: ori $a2, $a2, 0xb400
    a3 = 0x1000 << 16;                                          // 0x00170d6c: lui $a3, 0x1000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00170d70: lw $v1, 0($a0)
    a3 = a3 | 0x2010;                                           // 0x00170d74: ori $a3, $a3, 0x2010
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x00170d78: sw $v1, 0x20($s0)
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00170d7c: lw $v0, 0($a1)
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x00170d80: sw $v0, 0x24($s0)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00170d84: lw $v1, 0($a2)
    *(uint32_t*)((s0) + 0x28) = v1;                             // 0x00170d88: sw $v1, 0x28($s0)
    /* nop */                                                   // 0x00170d8c: nop 
label_0x170d90:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00170d90: lw $v0, 0($a3)
    v0 = v0 & 0xf0;                                             // 0x00170d94: andi $v0, $v0, 0xf0
    /* nop */                                                   // 0x00170d98: nop 
    /* nop */                                                   // 0x00170d9c: nop 
    /* nop */                                                   // 0x00170da0: nop 
    if (v0 != 0) goto label_0x170d90;                           // 0x00170da4: bnez $v0, 0x170d90
    /* nop */                                                   // 0x00170da8: nop 
    func_001706b0();  // 1706b0                                // 0x00170dac: jal 0x1706b0
    v0 = 0x1000 << 16;                                          // 0x00170db4: lui $v0, 0x1000
    v0 = v0 | 0xb010;                                           // 0x00170db8: ori $v0, $v0, 0xb010
    v1 = 0x1000 << 16;                                          // 0x00170dbc: lui $v1, 0x1000
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00170dc0: lw $a0, 0($v0)
    v1 = v1 | 0xb020;                                           // 0x00170dc4: ori $v1, $v1, 0xb020
    a2 = 0x1000 << 16;                                          // 0x00170dc8: lui $a2, 0x1000
    a3 = 0x1000 << 16;                                          // 0x00170dcc: lui $a3, 0x1000
    *(uint32_t*)((s0) + 0x2c) = a0;                             // 0x00170dd0: sw $a0, 0x2c($s0)
    a2 = a2 | 0xb000;                                           // 0x00170dd4: ori $a2, $a2, 0xb000
    a3 = a3 | 0x2020;                                           // 0x00170dd8: ori $a3, $a3, 0x2020
    a1 = 0x1000 << 16;                                          // 0x00170ddc: lui $a1, 0x1000
    t0 = g_10000000;  // Global at 0x10000000                   // 0x00170de0: lw $t0, 0($v1)
    a1 = a1 | 0x2010;                                           // 0x00170de4: ori $a1, $a1, 0x2010
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00170de8: lw $a0, 0x40($s0)
    *(uint32_t*)((s0) + 0x30) = t0;                             // 0x00170dec: sw $t0, 0x30($s0)
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00170df0: lw $v0, 0($a2)
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x00170df4: sw $v0, 0x34($s0)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00170df8: lw $v1, 0($a3)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x00170dfc: sw $v1, 0x38($s0)
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00170e00: lw $v0, 0($a1)
    iSignalSema();  // 0x114300                                 // 0x00170e04: jal 0x114300
    *(uint32_t*)((s0) + 0x3c) = v0;                             // 0x00170e08: sw $v0, 0x3c($s0)
    v0 = 1;                                                     // 0x00170e0c: addiu $v0, $zero, 1
    return;                                                     // 0x00170e18: jr $ra
    sp = sp + 0x10;                                             // 0x00170e1c: addiu $sp, $sp, 0x10
}