void func_001749e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x001749e0: addiu $sp, $sp, -0x40
    v0 = 1;                                                     // 0x001749e4: addiu $v0, $zero, 1
    *(uint32_t*)(s2) = 0;                                       // 0x00174a08: sw $zero, 0($s2)
    *(uint32_t*)(s3) = v0;                                      // 0x00174a0c: sw $v0, 0($s3)
    func_00169b10();  // 0x169af0                                // 0x00174a14: jal 0x169af0
    s0 = v0 + 0x2ab0;                                           // 0x00174a18: addiu $s0, $v0, 0x2ab0
    if (v0 == 0) goto label_0x174a40;                           // 0x00174a20: beqz $v0, 0x174a40
    a1 = 0xff00 << 16;                                          // 0x00174a28: lui $a1, 0xff00
    func_00169940();  // 0x1698d0                                // 0x00174a2c: jal 0x1698d0
    a1 = a1 | 0x157;                                            // 0x00174a30: ori $a1, $a1, 0x157
    goto label_0x174a70;                                        // 0x00174a34: b 0x174a70
    /* nop */                                                   // 0x00174a3c: nop 
label_0x174a40:
    func_001748e8();  // 0x174878                                // 0x00174a40: jal 0x174878
    a0 = *(int32_t*)(s0);                                       // 0x00174a44: lw $a0, 0($s0)
    v1 = local_0;                                               // 0x00174a4c: lw $v1, 0($sp)
    if (v1 == 0) goto label_0x174a6c;                           // 0x00174a58: beqz $v1, 0x174a6c
    func_00174b20();  // 0x174a88                                // 0x00174a60: jal 0x174a88
    a0 = *(int32_t*)(s0);                                       // 0x00174a64: lw $a0, 0($s0)
label_0x174a6c:
label_0x174a70:
    return;                                                     // 0x00174a80: jr $ra
    sp = sp + 0x40;                                             // 0x00174a84: addiu $sp, $sp, 0x40
}