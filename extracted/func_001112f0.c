void func_001112f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001112f0: addiu $sp, $sp, -0x20
    func_00111560();  // 111560                                // 0x00111304: jal 0x111560
    /* nop */                                                   // 0x00111308: nop 
    func_00111f40();  // 111f40                                // 0x00111318: jal 0x111f40
    /* nop */                                                   // 0x0011131c: nop 
    a1 = 0 | 0xf7c0;                                            // 0x00111324: ori $a1, $zero, 0xf7c0
    if (v0 < 0) goto label_0x111400;                            // 0x0011132c: bltz $v0, 0x111400
    func_00111a58();  // 111a58                                // 0x00111334: jal 0x111a58
    /* nop */                                                   // 0x00111338: nop 
    func_00112170();  // 112170                                // 0x00111340: jal 0x112170
    /* nop */                                                   // 0x00111344: nop 
    v0 = s0 & 1;                                                // 0x0011134c: andi $v0, $s0, 1
    if (s0 < 0) goto label_0x111370;                            // 0x00111354: bltz $s0, 0x111370
    a0 = v0 | a0;                                               // 0x00111358: or $a0, $v0, $a0
    func_00110fd0();  // 110fd0                                // 0x0011135c: jal 0x110fd0
    goto label_0x111388;                                        // 0x00111364: b 0x111388
    /* nop */                                                   // 0x00111368: nop 
    /* nop */                                                   // 0x0011136c: nop 
label_0x111370:
    func_00110fd0();  // 110fd0                                // 0x00111370: jal 0x110fd0
    /* nop */                                                   // 0x00111374: nop 
    func_00111998();  // 111998                                // 0x00111380: jal 0x111998
    /* nop */                                                   // 0x00111384: nop 
label_0x111388:
    func_001119f0();  // 1119f0                                // 0x00111390: jal 0x1119f0
    /* nop */                                                   // 0x00111394: nop 
    func_00111f40();  // 111f40                                // 0x001113a8: jal 0x111f40
    /* nop */                                                   // 0x001113ac: nop 
    if (v0 >= 0) goto label_0x1113e8;                           // 0x001113b8: bgez $v0, 0x1113e8
    /* nop */                                                   // 0x001113bc: nop 
    func_001119f0();  // 1119f0                                // 0x001113c4: jal 0x1119f0
    /* nop */                                                   // 0x001113c8: nop 
    func_00112170();  // 112170                                // 0x001113d0: jal 0x112170
    /* nop */                                                   // 0x001113d4: nop 
    goto label_0x1113fc;                                        // 0x001113e0: b 0x1113fc
label_0x1113e8:
    func_00112170();  // 112170                                // 0x001113e8: jal 0x112170
    /* nop */                                                   // 0x001113ec: nop 
label_0x1113fc:
label_0x111400:
    return;                                                     // 0x00111410: jr $ra
    sp = sp + 0x20;                                             // 0x00111414: addiu $sp, $sp, 0x20
}