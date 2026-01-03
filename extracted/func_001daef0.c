void func_001daef0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x001daef0: addiu $sp, $sp, -0xb0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001daef8: addu.qb $zero, $sp, $s1
    a1 = 0x24 << 16;                                            // 0x001daf08: lui $a1, 0x24
    a0 = sp + 0x30;                                             // 0x001daf0c: addiu $a0, $sp, 0x30
    func_0010ac68();  // 10ac68                                // 0x001daf10: jal 0x10ac68
    a1 = &str_002479e0;  // "%s/r%03d.evb"                      // 0x001daf14: addiu $a1, $a1, 0x79e0
    func_0010a860();  // 10a860                                // 0x001daf1c: jal 0x10a860
    a0 = sp + 0x30;                                             // 0x001daf20: addiu $a0, $sp, 0x30
    a1 = 0x24 << 16;                                            // 0x001daf24: lui $a1, 0x24
    a0 = sp + 0x30;                                             // 0x001daf28: addiu $a0, $sp, 0x30
    func_0010a860();  // 10a860                                // 0x001daf2c: jal 0x10a860
    a1 = a1 + 0x79f8;                                           // 0x001daf30: addiu $a1, $a1, 0x79f8
    at = 0x31 << 16;                                            // 0x001daf34: lui $at, 0x31
    a0 = sp + 0x30;                                             // 0x001daf38: addiu $a0, $sp, 0x30
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001daf3c: lw $s0, 0x37fc($at)
    a2 = 1;                                                     // 0x001daf40: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001daf48: jal 0x1d3390
    if (v0 <= 0) goto label_0x1daf60;                           // 0x001daf50: blez $v0, 0x1daf60
    func_001ac160();  // 1ac160                                // 0x001daf58: jal 0x1ac160
label_0x1daf60:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001daf64: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001daf68: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001daf6c: jr $ra
    sp = sp + 0xb0;                                             // 0x001daf70: addiu $sp, $sp, 0xb0
}