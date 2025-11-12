void func_00111160() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00111160: addiu $sp, $sp, -0x20
    func_00111f90();  // 0x111f40                                // 0x0011117c: jal 0x111f40
    /* nop */                                                   // 0x00111180: nop 
    a1 = 0 | 0xf7c0;                                            // 0x00111188: ori $a1, $zero, 0xf7c0
    if (v0 < 0) goto label_0x111260;                            // 0x00111190: bltz $v0, 0x111260
    func_00111ce0();  // 0x111a58                                // 0x00111198: jal 0x111a58
    /* nop */                                                   // 0x0011119c: nop 
    func_00112210();  // 0x112170                                // 0x001111a4: jal 0x112170
    /* nop */                                                   // 0x001111a8: nop 
    v0 = s0 & 1;                                                // 0x001111b0: andi $v0, $s0, 1
    if (s0 < 0) goto label_0x1111d0;                            // 0x001111b8: bltz $s0, 0x1111d0
    a0 = v0 | a0;                                               // 0x001111bc: or $a0, $v0, $a0
    func_00111078();  // 0x110fd0                                // 0x001111c0: jal 0x110fd0
    goto label_0x1111e8;                                        // 0x001111c8: b 0x1111e8
    /* nop */                                                   // 0x001111cc: nop 
label_0x1111d0:
    func_00111078();  // 0x110fd0                                // 0x001111d0: jal 0x110fd0
    /* nop */                                                   // 0x001111d4: nop 
    func_001119f0();  // 0x111998                                // 0x001111e0: jal 0x111998
    /* nop */                                                   // 0x001111e4: nop 
label_0x1111e8:
    func_00111a58();  // 0x1119f0                                // 0x001111f0: jal 0x1119f0
    /* nop */                                                   // 0x001111f4: nop 
    func_00111f90();  // 0x111f40                                // 0x00111208: jal 0x111f40
    /* nop */                                                   // 0x0011120c: nop 
    if (v0 >= 0) goto label_0x111248;                           // 0x00111218: bgez $v0, 0x111248
    /* nop */                                                   // 0x0011121c: nop 
    func_00111a58();  // 0x1119f0                                // 0x00111224: jal 0x1119f0
    /* nop */                                                   // 0x00111228: nop 
    func_00112210();  // 0x112170                                // 0x00111230: jal 0x112170
    /* nop */                                                   // 0x00111234: nop 
    goto label_0x11125c;                                        // 0x00111240: b 0x11125c
label_0x111248:
    func_00112210();  // 0x112170                                // 0x00111248: jal 0x112170
    /* nop */                                                   // 0x0011124c: nop 
label_0x11125c:
label_0x111260:
    return;                                                     // 0x00111270: jr $ra
    sp = sp + 0x20;                                             // 0x00111274: addiu $sp, $sp, 0x20
}