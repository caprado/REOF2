void func_001dba30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x140;                                           // 0x001dba30: addiu $sp, $sp, -0x140
    at = 0x31 << 16;                                            // 0x001dba34: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001dba40: addu.qb $zero, $sp, $s1
    s1 = 0x31 << 16;                                            // 0x001dba48: lui $s1, 0x31
    s2 = g_003137fc;  // Global at 0x003137fc                   // 0x001dba4c: lw $s2, 0x37fc($at)
    at = 0x31 << 16;                                            // 0x001dba50: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001dba54: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1dbb04;                           // 0x001dba58: bnez $v0, 0x1dbb04
    s1 = s1 + 0x37a0;                                           // 0x001dba5c: addiu $s1, $s1, 0x37a0
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001dba60: lhu $a3, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001dba64: lui $a1, 0x24
    t1 = g_003137bc;  // Global at 0x003137bc                   // 0x001dba68: lhu $t1, 0x1c($s1)
    a2 = 0x24 << 16;                                            // 0x001dba6c: lui $a2, 0x24
    t2 = g_003137be;  // Global at 0x003137be                   // 0x001dba70: lhu $t2, 0x1e($s1)
    a0 = sp + 0x40;                                             // 0x001dba74: addiu $a0, $sp, 0x40
    a1 = &str_00247cc0;  // "data/rom/scene/edit/lig"           // 0x001dba78: addiu $a1, $a1, 0x7cc0
    a2 = &str_00247ce0;  // "%s/r%03d/r%03d%02d%02d.fog"        // 0x001dba7c: addiu $a2, $a2, 0x7ce0
    func_0010a4d8();  // 10a4d8                                // 0x001dba80: jal 0x10a4d8
    s0 = sp + 0x40;                                             // 0x001dba88: addiu $s0, $sp, 0x40
    a2 = 1;                                                     // 0x001dba94: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001dba98: jal 0x1d3390
    if (v0 <= 0) goto label_0x1dbab0;                           // 0x001dbaa0: blez $v0, 0x1dbab0
    func_0068d6b0();  // 0x68d6b0                               // 0x001dbaa8: jal 0x68d6b0
label_0x1dbab0:
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001dbab0: lhu $a3, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001dbab4: lui $a1, 0x24
    t1 = g_003137bc;  // Global at 0x003137bc                   // 0x001dbab8: lhu $t1, 0x1c($s1)
    a2 = 0x24 << 16;                                            // 0x001dbabc: lui $a2, 0x24
    t2 = g_003137be;  // Global at 0x003137be                   // 0x001dbac0: lhu $t2, 0x1e($s1)
    a0 = sp + 0x40;                                             // 0x001dbac4: addiu $a0, $sp, 0x40
    a1 = &str_00247d00;  // "data/rom/scene/edit/fog"           // 0x001dbac8: addiu $a1, $a1, 0x7d00
    a2 = &str_00247d20;  // "r%03d%02d%02d.lig"                 // 0x001dbacc: addiu $a2, $a2, 0x7d20
    func_0010a4d8();  // 10a4d8                                // 0x001dbad0: jal 0x10a4d8
    a2 = 1;                                                     // 0x001dbae0: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001dbae4: jal 0x1d3390
    if (v0 <= 0) goto label_0x1dbb74;                           // 0x001dbaec: blez $v0, 0x1dbb74
    func_0068dbb0();  // 0x68dbb0                               // 0x001dbaf4: jal 0x68dbb0
    goto label_0x1dbb74;                                        // 0x001dbafc: b 0x1dbb74
    /* nop */                                                   // 0x001dbb00: nop 
label_0x1dbb04:
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001dbb04: lhu $a2, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001dbb08: lui $a1, 0x24
    a3 = g_003137bc;  // Global at 0x003137bc                   // 0x001dbb0c: lhu $a3, 0x1c($s1)
    a0 = sp + 0x40;                                             // 0x001dbb10: addiu $a0, $sp, 0x40
    t0 = g_003137be;  // Global at 0x003137be                   // 0x001dbb14: lhu $t0, 0x1e($s1)
    func_0010a4d8();  // 10a4d8                                // 0x001dbb18: jal 0x10a4d8
    a1 = &str_00247d40;  // "r%03d%02d%02d.fog"                 // 0x001dbb1c: addiu $a1, $a1, 0x7d40
    a0 = sp + 0x40;                                             // 0x001dbb20: addiu $a0, $sp, 0x40
    func_001a9b30();  // 1a9b30                                // 0x001dbb24: jal 0x1a9b30
    if (v0 == 0) goto label_0x1dbb3c;                           // 0x001dbb2c: beqz $v0, 0x1dbb3c
    func_0068d6b0();  // 0x68d6b0                               // 0x001dbb34: jal 0x68d6b0
label_0x1dbb3c:
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001dbb3c: lhu $a2, 0x1a($s1)
    a1 = 0x24 << 16;                                            // 0x001dbb40: lui $a1, 0x24
    a3 = g_003137bc;  // Global at 0x003137bc                   // 0x001dbb44: lhu $a3, 0x1c($s1)
    a0 = sp + 0x40;                                             // 0x001dbb48: addiu $a0, $sp, 0x40
    t0 = g_003137be;  // Global at 0x003137be                   // 0x001dbb4c: lhu $t0, 0x1e($s1)
    func_0010a4d8();  // 10a4d8                                // 0x001dbb50: jal 0x10a4d8
    a1 = &str_00247d60;  // "%s/r%02d.epp"                      // 0x001dbb54: addiu $a1, $a1, 0x7d60
    a0 = sp + 0x40;                                             // 0x001dbb58: addiu $a0, $sp, 0x40
    func_001a9b30();  // 1a9b30                                // 0x001dbb5c: jal 0x1a9b30
    if (v0 == 0) goto label_0x1dbb74;                           // 0x001dbb64: beqz $v0, 0x1dbb74
    func_0068dbb0();  // 0x68dbb0                               // 0x001dbb6c: jal 0x68dbb0
label_0x1dbb74:
    func_0068f100();  // 0x68f100                               // 0x001dbb74: jal 0x68f100
    /* nop */                                                   // 0x001dbb78: nop 
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001dbb80: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001dbb84: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dbb88: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dbb8c: jr $ra
    sp = sp + 0x140;                                            // 0x001dbb90: addiu $sp, $sp, 0x140
}