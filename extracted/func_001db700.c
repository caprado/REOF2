void func_001db700() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001db700: addiu $sp, $sp, -0x40
    at = 0x31 << 16;                                            // 0x001db704: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001db70c: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1db738;                           // 0x001db710: bnez $v0, 0x1db738
    at = 0x31 << 16;                                            // 0x001db714: lui $at, 0x31
    at = 0x31 << 16;                                            // 0x001db718: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001db71c: lui $a1, 0x24
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db720: lhu $a2, 0x37ba($at)
    a0 = sp + 0x10;                                             // 0x001db724: addiu $a0, $sp, 0x10
    func_0010a570();  // 0x10a4d8                                // 0x001db728: jal 0x10a4d8
    a1 = &str_00247c50;  // "r%02d.rtp"                         // 0x001db72c: addiu $a1, $a1, 0x7c50
    goto label_0x1db74c;                                        // 0x001db730: b 0x1db74c
    /* nop */                                                   // 0x001db734: nop 
label_0x1db738:
    a1 = 0x24 << 16;                                            // 0x001db738: lui $a1, 0x24
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001db73c: lhu $a2, 0x37ba($at)
    a0 = sp + 0x10;                                             // 0x001db740: addiu $a0, $sp, 0x10
    func_0010a570();  // 0x10a4d8                                // 0x001db744: jal 0x10a4d8
    a1 = &str_00247c70;  // "%s/r%03d.npc"                      // 0x001db748: addiu $a1, $a1, 0x7c70
label_0x1db74c:
    at = 0x31 << 16;                                            // 0x001db74c: lui $at, 0x31
    v0 = 1 << 16;                                               // 0x001db750: lui $v0, 1
    a1 = g_00313854;  // Global at 0x00313854                   // 0x001db754: lw $a1, 0x3854($at)
    a0 = sp + 0x10;                                             // 0x001db758: addiu $a0, $sp, 0x10
    func_001d33e0();  // 0x1d3390                                // 0x001db760: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001db764: ori $a2, $v0, 1
    return;                                                     // 0x001db76c: jr $ra
    sp = sp + 0x40;                                             // 0x001db770: addiu $sp, $sp, 0x40
}