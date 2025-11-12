void func_001a7a00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a7a00: addiu $sp, $sp, -0x20
    if (a0 == 0) goto label_0x1a7a28;                           // 0x001a7a08: beqz $a0, 0x1a7a28
    SetOsdConfigParam();  // 0x114330                           // 0x001a7a10: jal 0x114330
    a0 = *(int32_t*)((gp) + -0x7d54);                           // 0x001a7a14: lw $a0, -0x7d54($gp)
    if (v0 >= 0) goto label_0x1a7a30;                           // 0x001a7a18: bgez $v0, 0x1a7a30
    /* nop */                                                   // 0x001a7a1c: nop 
    goto label_0x1a7a44;                                        // 0x001a7a20: b 0x1a7a44
    v0 = -1;                                                    // 0x001a7a24: addiu $v0, $zero, -1
label_0x1a7a28:
    PollSema();  // 0x114320                                    // 0x001a7a28: jal 0x114320
    a0 = *(int32_t*)((gp) + -0x7d54);                           // 0x001a7a2c: lw $a0, -0x7d54($gp)
label_0x1a7a30:
    at = 0x2a << 16;                                            // 0x001a7a30: lui $at, 0x2a
    s0 = g_002a1180;  // Global at 0x002a1180                   // 0x001a7a34: lw $s0, 0x1180($at)
    iSignalSema();  // 0x114300                                 // 0x001a7a38: jal 0x114300
    a0 = *(int32_t*)((gp) + -0x7d54);                           // 0x001a7a3c: lw $a0, -0x7d54($gp)
label_0x1a7a44:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a7a48: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a7a4c: jr $ra
    sp = sp + 0x20;                                             // 0x001a7a50: addiu $sp, $sp, 0x20
}