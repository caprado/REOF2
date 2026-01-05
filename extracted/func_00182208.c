void func_00182208() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00182208: addiu $sp, $sp, -0x20
    a1 = 0x2f;                                                  // 0x0018220c: addiu $a1, $zero, 0x2f
    func_0010a990();  // 10a990                                // 0x00182218: jal 0x10a990
    if (v0 == 0) goto label_0x18224c;                           // 0x00182220: beqz $v0, 0x18224c
    func_0010b460();  // 10b460                                // 0x00182228: jal 0x10b460
    a1 = 0x2f;                                                  // 0x0018222c: addiu $a1, $zero, 0x2f
    func_0010ae00();  // 10ae00                                // 0x00182230: jal 0x10ae00
    a0 = v0 + 1;                                                // 0x00182234: addiu $a0, $v0, 1
    v0 = ((unsigned)v0 < (unsigned)0x20) ? 1 : 0;               // 0x00182238: sltiu $v0, $v0, 0x20
    if (v0 != 0) goto label_0x182264;                           // 0x0018223c: bnez $v0, 0x182264
    v0 = 1;                                                     // 0x00182240: addiu $v0, $zero, 1
    goto label_0x182264;                                        // 0x00182244: b 0x182264
label_0x18224c:
    func_0010ae00();  // 10ae00                                // 0x0018224c: jal 0x10ae00
    v1 = ((unsigned)v0 < (unsigned)0x20) ? 1 : 0;               // 0x00182254: sltiu $v1, $v0, 0x20
    if (v1 == 0) goto label_0x182264;                           // 0x00182258: beqz $v1, 0x182264
    v0 = 1;                                                     // 0x00182260: addiu $v0, $zero, 1
label_0x182264:
    return;                                                     // 0x0018226c: jr $ra
    sp = sp + 0x20;                                             // 0x00182270: addiu $sp, $sp, 0x20
}