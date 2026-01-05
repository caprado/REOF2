void func_00128f00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00128f00: addiu $sp, $sp, -0x20
    t0 = -1;                                                    // 0x00128f04: addiu $t0, $zero, -1
    a0 = 2;                                                     // 0x00128f20: addiu $a0, $zero, 2
    func_001281b8();  // 1281b8                                // 0x00128f2c: jal 0x1281b8
    func_00128c40();  // 128c40                                // 0x00128f34: jal 0x128c40
    /* nop */                                                   // 0x00128f38: nop 
    if (s0 == 0) goto label_0x128f6c;                           // 0x00128f48: beqz $s0, 0x128f6c
    func_00128e28();  // 128e28                                // 0x00128f50: jal 0x128e28
    /* nop */                                                   // 0x00128f54: nop 
    if (v0 >= 0) goto label_0x128f70;                           // 0x00128f58: bgez $v0, 0x128f70
    func_00129010();  // 129010                                // 0x00128f64: jal 0x129010
label_0x128f6c:
label_0x128f70:
    a0 = 2;                                                     // 0x00128f74: addiu $a0, $zero, 2
    a1 = 1;                                                     // 0x00128f78: addiu $a1, $zero, 1
    func_001281b8();  // 1281b8                                // 0x00128f7c: jal 0x1281b8
    t0 = -1;                                                    // 0x00128f80: addiu $t0, $zero, -1
    return;                                                     // 0x00128f98: jr $ra
    sp = sp + 0x20;                                             // 0x00128f9c: addiu $sp, $sp, 0x20
}