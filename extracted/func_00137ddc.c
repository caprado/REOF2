void func_00137ddc() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00137ddc: addiu $sp, $sp, -0x10
    func_00116508();  // 116508                                // 0x00137de8: jal 0x116508
    a0 = a0 + 0x4e78;                                           // 0x00137dec: addiu $a0, $a0, 0x4e78
    v0 = 0x20 << 16;                                            // 0x00137df0: lui $v0, 0x20
    a0 = 0x22 << 16;                                            // 0x00137df4: lui $a0, 0x22
    a1 = g_002021c4;  // Global at 0x002021c4                   // 0x00137df8: lw $a1, 0x21c4($v0)
    func_00116508();  // 116508                                // 0x00137dfc: jal 0x116508
    a0 = &str_00224e88;  // " srd_debug_geterror = %d\n"        // 0x00137e00: addiu $a0, $a0, 0x4e88
    a0 = 0x22 << 16;                                            // 0x00137e04: lui $a0, 0x22
    v0 = 0x20 << 16;                                            // 0x00137e08: lui $v0, 0x20
    a0 = &str_00224ea8;  // " srd_obj.stat       = %d\n"        // 0x00137e0c: addiu $a0, $a0, 0x4ea8
    v0 = v0 + 0x21dc;                                           // 0x00137e10: addiu $v0, $v0, 0x21dc
    func_00116508();  // 116508                                // 0x00137e14: jal 0x116508
    a1 = g_002021dc;  // Global at 0x002021dc                   // 0x00137e18: lw $a1, 0($v0)
    a0 = 0x22 << 16;                                            // 0x00137e1c: lui $a0, 0x22
    v0 = 0x20 << 16;                                            // 0x00137e20: lui $v0, 0x20
    a0 = &str_00224ec8;  // " srd_obj.devtype    = DVD\n"       // 0x00137e24: addiu $a0, $a0, 0x4ec8
    s0 = v0 + 0x2188;                                           // 0x00137e28: addiu $s0, $v0, 0x2188
    func_00116508();  // 116508                                // 0x00137e2c: jal 0x116508
    a1 = g_0020218a;  // Global at 0x0020218a                   // 0x00137e30: lb $a1, 2($s0)
    a0 = 0x22 << 16;                                            // 0x00137e34: lui $a0, 0x22
    v1 = g_00202189;  // Global at 0x00202189                   // 0x00137e38: lb $v1, 1($s0)
    v0 = 1;                                                     // 0x00137e3c: addiu $v0, $zero, 1
    a0 = &str_00224ee8;  // " srd_obj.devtype    = HOST\n"      // 0x00137e40: addiu $a0, $a0, 0x4ee8
    if (v1 != v0) goto label_0x137e58;                          // 0x00137e44: bne $v1, $v0, 0x137e58
    a1 = g_00202189;  // Global at 0x00202189                   // 0x00137e48: lbu $a1, 1($s0)
    func_00116508();  // 116508                                // 0x00137e4c: jal 0x116508
    /* nop */                                                   // 0x00137e50: nop 
    a1 = g_00202189;  // Global at 0x00202189                   // 0x00137e54: lbu $a1, 1($s0)
label_0x137e58:
    v0 = a1 << 0x18;                                            // 0x00137e58: sll $v0, $a1, 0x18
    v1 = 2;                                                     // 0x00137e5c: addiu $v1, $zero, 2
    v0 = v0 >> 0x18;                                            // 0x00137e60: sra $v0, $v0, 0x18
    if (v0 != v1) goto label_0x137e78;                          // 0x00137e64: bne $v0, $v1, 0x137e78
    /* nop */                                                   // 0x00137e68: nop 
    a0 = 0x22 << 16;                                            // 0x00137e6c: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00137e70: jal 0x116508
    a0 = &str_00224f08;  // " Read Status(DVD=2/HST=1) = %d\n"  // 0x00137e74: addiu $a0, $a0, 0x4f08
label_0x137e78:
    func_00137d88();  // 137d88                                // 0x00137e78: jal 0x137d88
    /* nop */                                                   // 0x00137e7c: nop 
    a0 = 0x22 << 16;                                            // 0x00137e80: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00137e88: jal 0x116508
    a0 = &str_00224f28;  // "SRD: 64bit Host filesystem.\r\n"   // 0x00137e8c: addiu $a0, $a0, 0x4f28
    return;                                                     // 0x00137e9c: jr $ra
    sp = sp + 0x10;                                             // 0x00137ea0: addiu $sp, $sp, 0x10
}