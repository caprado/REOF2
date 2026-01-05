void func_00112118() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x40;                                            // 0x00112118: addiu $sp, $sp, -0x40
    a0 = sp + 0x20;                                             // 0x00112120: addiu $a0, $sp, 0x20
    func_00111678();  // 111678                                // 0x00112128: jal 0x111678
    a1 = 0x3fff << 16;                                          // 0x00112130: lui $a1, 0x3fff
    a1 = a1 | 0xffff;                                           // 0x00112134: ori $a1, $a1, 0xffff
    a0 = local_0;                                               // 0x0011213c: lw $a0, 0($sp)
    v0 = v0 & a1;                                               // 0x00112148: and $v0, $v0, $a1
    a3 = v1 | 1;                                                // 0x0011214c: ori $a3, $v1, 1
    a2 = local_8;                                               // 0x00112150: lw $a2, 8($sp)
    a1 = local_4;                                               // 0x00112154: lw $a1, 4($sp)
    func_00111530();  // 111530                                // 0x00112158: jal 0x111530
    if (v0 == 0) a3 = v1;                                       // 0x0011215c: movz $a3, $v1, $v0
    return;                                                     // 0x00112164: jr $ra
    sp = sp + 0x40;                                             // 0x00112168: addiu $sp, $sp, 0x40
}