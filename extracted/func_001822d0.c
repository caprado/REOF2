void func_001822d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001822d0: addiu $sp, $sp, -0x40
    a1 = 0x2f;                                                  // 0x001822d4: addiu $a1, $zero, 0x2f
    func_0010ab20();  // 0x10a990                                // 0x001822e0: jal 0x10a990
    if (v0 == 0) goto label_0x182328;                           // 0x001822e8: beqz $v0, 0x182328
    func_0010b4b0();  // 0x10b460                                // 0x001822f0: jal 0x10b460
    a1 = 0x2f;                                                  // 0x001822f4: addiu $a1, $zero, 0x2f
    func_0010af38();  // 0x10ae00                                // 0x001822f8: jal 0x10ae00
    a0 = v0 + 1;                                                // 0x001822fc: addiu $a0, $v0, 1
    v0 = ((unsigned)v0 < (unsigned)0x20) ? 1 : 0;               // 0x00182300: sltiu $v0, $v0, 0x20
    if (v0 == 0) goto label_0x182370;                           // 0x00182304: beqz $v0, 0x182370
    func_0010b4b0();  // 0x10b460                                // 0x0018230c: jal 0x10b460
    a1 = 0x2f;                                                  // 0x00182310: addiu $a1, $zero, 0x2f
    a1 = v0 + 1;                                                // 0x00182314: addiu $a1, $v0, 1
    func_0010ae00();  // 0x10ac68                                // 0x00182318: jal 0x10ac68
    goto label_0x182348;                                        // 0x00182320: b 0x182348
    a1 = 0x23 << 16;                                            // 0x00182324: lui $a1, 0x23
label_0x182328:
    func_0010af38();  // 0x10ae00                                // 0x00182328: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x20) ? 1 : 0;               // 0x00182330: sltiu $v0, $v0, 0x20
    if (v0 == 0) goto label_0x182370;                           // 0x00182334: beqz $v0, 0x182370
    func_0010ae00();  // 0x10ac68                                // 0x0018233c: jal 0x10ac68
    a1 = 0x23 << 16;                                            // 0x00182344: lui $a1, 0x23
label_0x182348:
    func_0010ac68();  // 0x10ab20                                // 0x0018234c: jal 0x10ab20
    a1 = a1 + -0x60a0;                                          // 0x00182350: addiu $a1, $a1, -0x60a0
    if (v0 == 0) goto label_0x182370;                           // 0x00182354: beqz $v0, 0x182370
    a1 = 0x23 << 16;                                            // 0x00182358: lui $a1, 0x23
    func_0010ac68();  // 0x10ab20                                // 0x00182360: jal 0x10ab20
    a1 = a1 + -0x6098;                                          // 0x00182364: addiu $a1, $a1, -0x6098
    if (v0 != 0) goto label_0x182374;                           // 0x00182368: bnez $v0, 0x182374
    v0 = 1;                                                     // 0x0018236c: addiu $v0, $zero, 1
label_0x182370:
label_0x182374:
    return;                                                     // 0x0018237c: jr $ra
    sp = sp + 0x40;                                             // 0x00182380: addiu $sp, $sp, 0x40
}