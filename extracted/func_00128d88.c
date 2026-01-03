void func_00128d88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00128d88: addiu $sp, $sp, -0x20
    t0 = -1;                                                    // 0x00128d8c: addiu $t0, $zero, -1
    a0 = 1;                                                     // 0x00128da8: addiu $a0, $zero, 1
    func_001281b8();  // 1281b8                                // 0x00128db4: jal 0x1281b8
    func_00128c40();  // 128c40                                // 0x00128dbc: jal 0x128c40
    /* nop */                                                   // 0x00128dc0: nop 
    if (s0 == 0) goto label_0x128df4;                           // 0x00128dd0: beqz $s0, 0x128df4
    func_00128cd0();  // 128cd0                                // 0x00128dd8: jal 0x128cd0
    /* nop */                                                   // 0x00128ddc: nop 
    if (v0 >= 0) goto label_0x128df8;                           // 0x00128de0: bgez $v0, 0x128df8
    func_00129010();  // 129010                                // 0x00128dec: jal 0x129010
label_0x128df4:
label_0x128df8:
    a0 = 1;                                                     // 0x00128dfc: addiu $a0, $zero, 1
    a1 = 1;                                                     // 0x00128e00: addiu $a1, $zero, 1
    func_001281b8();  // 1281b8                                // 0x00128e04: jal 0x1281b8
    t0 = -1;                                                    // 0x00128e08: addiu $t0, $zero, -1
    return;                                                     // 0x00128e20: jr $ra
    sp = sp + 0x20;                                             // 0x00128e24: addiu $sp, $sp, 0x20
}