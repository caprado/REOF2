void func_001bdd30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x120;                                           // 0x001bdd30: addiu $sp, $sp, -0x120
    a1 = 0x24 << 16;                                            // 0x001bdd34: lui $a1, 0x24
    a1 = &str_0023dfd0;  // "%s,,%s,PFS"                        // 0x001bdd3c: addiu $a1, $a1, -0x2030
    a2 = 0x1234;                                                // 0x001bdd44: addiu $a2, $zero, 0x1234
    func_001bdf00();  // 0x1bdde0                                // 0x001bdd4c: jal 0x1bdde0
    a0 = sp + 0x20;                                             // 0x001bdd50: addiu $a0, $sp, 0x20
    a0 = 0x24 << 16;                                            // 0x001bdd54: lui $a0, 0x24
    a2 = s0 | 4;                                                // 0x001bdd58: ori $a2, $s0, 4
    a0 = &str_0023e028;  // "cdrom0:\\%s;1"                     // 0x001bdd5c: addiu $a0, $a0, -0x1fd8
    a1 = sp + 0x20;                                             // 0x001bdd60: addiu $a1, $sp, 0x20
    func_0011acd0();  // 0x11aa40                                // 0x001bdd68: jal 0x11aa40
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bdd74: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bdd78: jr $ra
    sp = sp + 0x120;                                            // 0x001bdd7c: addiu $sp, $sp, 0x120
}