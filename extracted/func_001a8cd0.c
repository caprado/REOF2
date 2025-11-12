void func_001a8cd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a8cd0: addiu $sp, $sp, -0x10
    if (a0 <= 0) goto label_0x1a8cec;                           // 0x001a8cd4: blez $a0, 0x1a8cec
    a1 = *(int32_t*)(a1);                                       // 0x001a8cdc: lw $a1, 0($a1)
    a0 = 0x2a << 16;                                            // 0x001a8ce0: lui $a0, 0x2a
    func_0010ae00();  // 0x10ac68                                // 0x001a8ce4: jal 0x10ac68
    a0 = a0 + 0x5110;                                           // 0x001a8ce8: addiu $a0, $a0, 0x5110
label_0x1a8cec:
    func_001a8cd0();  // 0x1a8aa0                                // 0x001a8cec: jal 0x1a8aa0
    /* nop */                                                   // 0x001a8cf0: nop 
label_0x1a8cf4:
    func_001ba2a0();  // 0x1ba1d0                                // 0x001a8cf4: jal 0x1ba1d0
    /* nop */                                                   // 0x001a8cf8: nop 
    func_001c8d10();  // 0x1c8cd0                                // 0x001a8cfc: jal 0x1c8cd0
    /* nop */                                                   // 0x001a8d00: nop 
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001a8d04: sltu $v0, $zero, $v0
    v0 = v0 ^ 1;                                                // 0x001a8d08: xori $v0, $v0, 1
    if (v0 != 0) goto label_0x1a8cf4;                           // 0x001a8d0c: bnez $v0, 0x1a8cf4
    /* nop */                                                   // 0x001a8d10: nop 
    v0 = *(uint16_t*)((gp) + -0x633c);                          // 0x001a8d14: lhu $v0, -0x633c($gp)
    v0 = v0 & 0x1f;                                             // 0x001a8d18: andi $v0, $v0, 0x1f
    if (v0 != 0) goto label_0x1a8cf4;                           // 0x001a8d1c: bnez $v0, 0x1a8cf4
    /* nop */                                                   // 0x001a8d20: nop 
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001a8d24: lw $v1, -0x6260($gp)
    v0 = *(int8_t*)((gp) + -0x627c);                            // 0x001a8d28: lb $v0, -0x627c($gp)
    a0 = *(int32_t*)(v1);                                       // 0x001a8d2c: lw $a0, 0($v1)
    v0 = v0 ^ 1;                                                // 0x001a8d30: xori $v0, $v0, 1
    func_001c8e50();  // 0x1c8d10                                // 0x001a8d34: jal 0x1c8d10
    a1 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001a8d38: sltiu $a1, $v0, 1
    goto label_0x1a8cf4;                                        // 0x001a8d3c: b 0x1a8cf4
    /* nop */                                                   // 0x001a8d40: nop 
    /* nop */                                                   // 0x001a8d44: nop 
    /* nop */                                                   // 0x001a8d48: nop 
    /* nop */                                                   // 0x001a8d4c: nop 
    sp = sp + -0x30;                                            // 0x001a8d50: addiu $sp, $sp, -0x30
    v0 = 0x6f << 16;                                            // 0x001a8d54: lui $v0, 0x6f
    v0 = v0 | 0x574d;                                           // 0x001a8d5c: ori $v0, $v0, 0x574d
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a8d60: addu.qb $zero, $sp, $s1
    v1 = g_002a5110;  // Global at 0x002a5110                   // 0x001a8d68: lw $v1, 0($a0)
    if (v1 == v0) goto label_0x1a8d84;                          // 0x001a8d74: beq $v1, $v0, 0x1a8d84
    goto label_0x1a8db8;                                        // 0x001a8d7c: b 0x1a8db8
label_0x1a8d84:
    s0 = *(int32_t*)((a1) + 8);                                 // 0x001a8d84: lw $s0, 8($a1)
    v0 = *(int32_t*)((a1) + 0x18);                              // 0x001a8d88: lw $v0, 0x18($a1)
    s1 = v0 - s0;                                               // 0x001a8d8c: subu $s1, $v0, $s0
    if (s1 > 0) goto label_0x1a8da0;                            // 0x001a8d90: bgtz $s1, 0x1a8da0
    goto label_0x1a8db8;                                        // 0x001a8d98: b 0x1a8db8
label_0x1a8da0:
    func_00107b68();  // 0x107ab8                                // 0x001a8da0: jal 0x107ab8
    func_0017ff90();  // 0x17ff10                                // 0x001a8dac: jal 0x17ff10
    v0 = 1;                                                     // 0x001a8db4: addiu $v0, $zero, 1
label_0x1a8db8:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a8dbc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a8dc0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a8dc4: jr $ra
    sp = sp + 0x30;                                             // 0x001a8dc8: addiu $sp, $sp, 0x30
}