void func_00111078() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00111078: addiu $sp, $sp, -0x20
    v0 = -1;                                                    // 0x0011107c: addiu $v0, $zero, -1
    v1 = -1;                                                    // 0x00111090: addiu $v1, $zero, -1
    v1 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x0011109c: sltu $v1, $v1, $v0
    v0 = s1 & 0x7ff;                                            // 0x001110a0: andi $v0, $s1, 0x7ff
    if (v1 == 0) goto label_0x1110c0;                           // 0x001110ac: beqz $v1, 0x1110c0
    if (v0 == 0) goto label_0x1110c0;                           // 0x001110b4: beqz $v0, 0x1110c0
    v0 = 0x800;                                                 // 0x001110b8: addiu $v0, $zero, 0x800
    s1 = s1 | v0;                                               // 0x001110bc: or $s1, $s1, $v0
label_0x1110c0:
    s0 = 0 | 0x81e0;                                            // 0x001110c0: ori $s0, $zero, 0x81e0
    func_00112048();  // 0x111f90                                // 0x001110cc: jal 0x111f90
    /* nop */                                                   // 0x001110d0: nop 
    func_00111ce0();  // 0x111a58                                // 0x001110dc: jal 0x111a58
    /* nop */                                                   // 0x001110e0: nop 
    s0 = 0xffff << 16;                                          // 0x001110e8: lui $s0, 0xffff
    func_00111ce0();  // 0x111a58                                // 0x001110f4: jal 0x111a58
    s0 = s1 & s0;                                               // 0x001110f8: and $s0, $s1, $s0
    func_00112048();  // 0x111f90                                // 0x00111108: jal 0x111f90
    a1 = 0 | 0x83e0;                                            // 0x00111110: ori $a1, $zero, 0x83e0
    if (s0 >= 0) goto label_0x11112c;                           // 0x00111118: bgez $s0, 0x11112c
    /* nop */                                                   // 0x0011111c: nop 
    func_001119f0();  // 0x111998                                // 0x00111124: jal 0x111998
    /* nop */                                                   // 0x00111128: nop 
label_0x11112c:
    func_001119f0();  // 0x111998                                // 0x00111134: jal 0x111998
    /* nop */                                                   // 0x00111138: nop 
    func_00112170();  // 0x112118                                // 0x00111140: jal 0x112118
    /* nop */                                                   // 0x00111144: nop 
    return;                                                     // 0x00111158: jr $ra
    sp = sp + 0x20;                                             // 0x0011115c: addiu $sp, $sp, 0x20
}