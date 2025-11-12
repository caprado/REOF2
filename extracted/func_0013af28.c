void func_0013af28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x30;                                            // 0x0013af28: addiu $sp, $sp, -0x30
    if (s0 == 0) goto label_0x13afb4;                           // 0x0013af3c: beqz $s0, 0x13afb4
    func_0013c4f8();  // 0x13c4a8                                // 0x0013af44: jal 0x13c4a8
    v0 = 0x20 << 16;                                            // 0x0013af4c: lui $v0, 0x20
    s1 = v0 + 0x4360;                                           // 0x0013af50: addiu $s1, $v0, 0x4360
    v0 = local_4;                                               // 0x0013af54: lw $v0, 4($sp)
    if (v0 != 0) goto label_0x13afb0;                           // 0x0013af5c: bnez $v0, 0x13afb0
    func_0013bc58();  // 0x13bb40                                // 0x0013af64: jal 0x13bb40
    /* nop */                                                   // 0x0013af68: nop 
    func_00137fb0();  // 0x137ec8                                // 0x0013af6c: jal 0x137ec8
    a0 = 0x4200;                                                // 0x0013af70: addiu $a0, $zero, 0x4200
    func_00138240();  // 0x1381d8                                // 0x0013af78: jal 0x1381d8
    a1 = 1;                                                     // 0x0013af7c: addiu $a1, $zero, 1
    a0 = 0x4201;                                                // 0x0013af80: addiu $a0, $zero, 0x4201
    func_00137fb0();  // 0x137ec8                                // 0x0013af84: jal 0x137ec8
    a0 = 0x4300;                                                // 0x0013af8c: addiu $a0, $zero, 0x4300
    if (s0 < 0) goto label_0x13afb4;                            // 0x0013af90: bltz $s0, 0x13afb4
    func_00137fb0();  // 0x137ec8                                // 0x0013af98: jal 0x137ec8
    /* nop */                                                   // 0x0013af9c: nop 
    func_00138298();  // 0x138240                                // 0x0013afa0: jal 0x138240
    func_00137fb0();  // 0x137ec8                                // 0x0013afa8: jal 0x137ec8
    a0 = 0x4301;                                                // 0x0013afac: addiu $a0, $zero, 0x4301
label_0x13afb0:
    v0 = 1;                                                     // 0x0013afb0: addiu $v0, $zero, 1
label_0x13afb4:
    return;                                                     // 0x0013afc0: jr $ra
    sp = sp + 0x30;                                             // 0x0013afc4: addiu $sp, $sp, 0x30
}