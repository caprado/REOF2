void func_001bdd80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x24 << 16;                                            // 0x001bdd80: lui $a0, 0x24
    return func_0011acb0();  // Tail call                       // 0x001bdd84: j 0x11acb0
    a0 = &str_0023e028;  // "cdrom0:\\%s;1"                     // 0x001bdd88: addiu $a0, $a0, -0x1fd8
    /* nop */                                                   // 0x001bdd8c: nop 
    sp = sp + -0x20;                                            // 0x001bdd90: addiu $sp, $sp, -0x20
    a1 = 0x24 << 16;                                            // 0x001bdd9c: lui $a1, 0x24
    a1 = &str_0023e030;  // "pfs0:%s"                           // 0x001bdda4: addiu $a1, $a1, -0x1fd0
    func_0010a4d8();  // 10a4d8                                // 0x001bdda8: jal 0x10a4d8
    func_0010ca50();  // 10ca50                                // 0x001bddb0: jal 0x10ca50
    a0 = s0 + 8;                                                // 0x001bddb4: addiu $a0, $s0, 8
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bddbc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bddc0: jr $ra
    sp = sp + 0x20;                                             // 0x001bddc4: addiu $sp, $sp, 0x20
}