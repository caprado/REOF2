void func_001dbba0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x120;                                           // 0x001dbba0: addiu $sp, $sp, -0x120
    a1 = 0x24 << 16;                                            // 0x001dbba4: lui $a1, 0x24
    a2 = 0x24 << 16;                                            // 0x001dbbac: lui $a2, 0x24
    at = 0x31 << 16;                                            // 0x001dbbb4: lui $at, 0x31
    s0 = g_0031385c;  // Global at 0x0031385c                   // 0x001dbbb8: lw $s0, 0x385c($at)
    a0 = sp + 0x20;                                             // 0x001dbbbc: addiu $a0, $sp, 0x20
    a1 = &str_00247d78;  // "data/rom/scene/em_set"             // 0x001dbbc0: addiu $a1, $a1, 0x7d78
    at = 0x31 << 16;                                            // 0x001dbbc4: lui $at, 0x31
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001dbbc8: lhu $a3, 0x37ba($at)
    func_0010a4d8();  // 10a4d8                                // 0x001dbbcc: jal 0x10a4d8
    a2 = &str_00247d90;  // "data/rom/netwk/lobby_01.tm2"       // 0x001dbbd0: addiu $a2, $a2, 0x7d90
    v0 = 1 << 16;                                               // 0x001dbbd4: lui $v0, 1
    a0 = sp + 0x20;                                             // 0x001dbbd8: addiu $a0, $sp, 0x20
    func_001d3390();  // 1d3390                                // 0x001dbbe4: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001dbbe8: ori $a2, $v0, 1
    if (v0 > 0) goto label_0x1dbbfc;                            // 0x001dbbec: bgtz $v0, 0x1dbbfc
    /* nop */                                                   // 0x001dbbf0: nop 
    v1 = -1;                                                    // 0x001dbbf4: addiu $v1, $zero, -1
    *(uint8_t*)(s0) = v1;                                       // 0x001dbbf8: sb $v1, 0($s0)
label_0x1dbbfc:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dbc00: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dbc04: jr $ra
    sp = sp + 0x120;                                            // 0x001dbc08: addiu $sp, $sp, 0x120
}