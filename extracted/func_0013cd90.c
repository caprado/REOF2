void func_0013cd90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013cd90: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x13cdb0;                           // 0x0013cd94: bnez $a0, 0x13cdb0
    a0 = 0x22 << 16;                                            // 0x0013cd9c: lui $a0, 0x22
    func_0013d1b8();  // 13d1b8                                // 0x0013cda0: jal 0x13d1b8
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013cda4: addiu $a0, $a0, 0x5be8
    goto label_0x13cdb4;                                        // 0x0013cda8: b 0x13cdb4
    v0 = -1;                                                    // 0x0013cdac: addiu $v0, $zero, -1
label_0x13cdb0:
    v0 = g_00225c0c;  // Global at 0x00225c0c                   // 0x0013cdb0: lw $v0, 0x24($a0)
label_0x13cdb4:
    return;                                                     // 0x0013cdb8: jr $ra
    sp = sp + 0x10;                                             // 0x0013cdbc: addiu $sp, $sp, 0x10
}