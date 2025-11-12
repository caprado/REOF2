void func_001380a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001380a8: addiu $sp, $sp, -0x20
    func_00137fe8();  // 0x137fb0                                // 0x001380c4: jal 0x137fb0
    v0 = 0x20 << 16;                                            // 0x001380cc: lui $v0, 0x20
    v1 = 1;                                                     // 0x001380d0: addiu $v1, $zero, 1
    a3 = g_002021f8;  // Global at 0x002021f8                   // 0x001380d4: lw $a3, 0x21f8($v0)
    if (a3 != v1) goto label_0x138118;                          // 0x001380e4: bne $a3, $v1, 0x138118
    func_0011af08();  // 0x11acd0                                // 0x001380ec: jal 0x11acd0
    a0 = 0x22 << 16;                                            // 0x001380f4: lui $a0, 0x22
    a0 = &str_00224f80;  // "SRD: sceLseek error = %d\r\n"      // 0x001380fc: addiu $a0, $a0, 0x4f80
    if (s0 >= 0) goto label_0x13813c;                           // 0x00138100: bgez $s0, 0x13813c
    func_00116598();  // 0x116508                                // 0x00138108: jal 0x116508
    /* nop */                                                   // 0x0013810c: nop 
    goto label_0x13813c;                                        // 0x00138110: b 0x13813c
    /* nop */                                                   // 0x00138114: nop 
label_0x138118:
    func_00118d70();  // 0x118b38                                // 0x00138118: jal 0x118b38
    /* nop */                                                   // 0x0013811c: nop 
    a0 = 0x22 << 16;                                            // 0x00138120: lui $a0, 0x22
    a0 = &str_00224fa0;  // "SRD: sceIoctl error = %d\r\n"      // 0x00138128: addiu $a0, $a0, 0x4fa0
    if (s0 >= 0) goto label_0x13813c;                           // 0x0013812c: bgez $s0, 0x13813c
    func_00116598();  // 0x116508                                // 0x00138134: jal 0x116508
    /* nop */                                                   // 0x00138138: nop 
label_0x13813c:
    func_00138020();  // 0x137fe8                                // 0x0013813c: jal 0x137fe8
    /* nop */                                                   // 0x00138140: nop 
    return;                                                     // 0x00138158: jr $ra
    sp = sp + 0x20;                                             // 0x0013815c: addiu $sp, $sp, 0x20
}