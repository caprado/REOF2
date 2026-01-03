void func_00137ce8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00137ce8: addiu $sp, $sp, -0x20
    v0 = 0x20 << 16;                                            // 0x00137cec: lui $v0, 0x20
    s0 = v0 + 0x2188;                                           // 0x00137cf4: addiu $s0, $v0, 0x2188
    v1 = g_0020218a;  // Global at 0x0020218a                   // 0x00137cf8: lb $v1, 2($s0)
    a0 = 2;                                                     // 0x00137cfc: addiu $a0, $zero, 2
    if (v1 != a0) goto label_0x137d70;                          // 0x00137d00: bne $v1, $a0, 0x137d70
    func_00141390();  // 141390                                // 0x00137d08: jal 0x141390
    /* nop */                                                   // 0x00137d0c: nop 
    func_00137ec8();  // 137ec8                                // 0x00137d10: jal 0x137ec8
    a0 = 0x2400;                                                // 0x00137d14: addiu $a0, $zero, 0x2400
    a1 = 1;                                                     // 0x00137d18: addiu $a1, $zero, 1
    a0 = g_002021b8;  // Global at 0x002021b8                   // 0x00137d1c: lw $a0, 0x30($s0)
    func_00138160();  // 138160                                // 0x00137d20: jal 0x138160
    if (v0 >= 0) goto label_0x137d40;                           // 0x00137d28: bgez $v0, 0x137d40
    a0 = 0x2402;                                                // 0x00137d2c: addiu $a0, $zero, 0x2402
    func_00137ec8();  // 137ec8                                // 0x00137d30: jal 0x137ec8
    a0 = 0x2401;                                                // 0x00137d34: addiu $a0, $zero, 0x2401
    goto label_0x137d68;                                        // 0x00137d38: b 0x137d68
    /* nop */                                                   // 0x00137d3c: nop 
label_0x137d40:
    func_00137ec8();  // 137ec8                                // 0x00137d40: jal 0x137ec8
    /* nop */                                                   // 0x00137d44: nop 
    v0 = local_0;                                               // 0x00137d48: lw $v0, 0($sp)
    if (v0 == 0) goto label_0x137d68;                           // 0x00137d4c: beqz $v0, 0x137d68
    /* nop */                                                   // 0x00137d50: nop 
    func_001413a8();  // 1413a8                                // 0x00137d54: jal 0x1413a8
    /* nop */                                                   // 0x00137d58: nop 
    goto label_0x137d74;                                        // 0x00137d5c: b 0x137d74
    v0 = 1;                                                     // 0x00137d60: addiu $v0, $zero, 1
    /* nop */                                                   // 0x00137d64: nop 
label_0x137d68:
    func_001413a8();  // 1413a8                                // 0x00137d68: jal 0x1413a8
    /* nop */                                                   // 0x00137d6c: nop 
label_0x137d70:
label_0x137d74:
    return;                                                     // 0x00137d7c: jr $ra
    sp = sp + 0x20;                                             // 0x00137d80: addiu $sp, $sp, 0x20
}