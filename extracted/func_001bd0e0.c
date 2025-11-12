void func_001bd0e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001bd0e0: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((gp) + -0x7c48);                           // 0x001bd0e8: lw $v1, -0x7c48($gp)
    if (v1 < 0) goto label_0x1bd15c;                            // 0x001bd0ec: bltz $v1, 0x1bd15c
    func_00100788();  // 0x100708                                // 0x001bd0f4: jal 0x100708
    ChangeThreadPriority();  // 0x114130                        // 0x001bd0fc: jal 0x114130
    a0 = *(int32_t*)((gp) + -0x7c48);                           // 0x001bd100: lw $a0, -0x7c48($gp)
    StartThread();  // 0x1140f0                                 // 0x001bd104: jal 0x1140f0
    a0 = *(int32_t*)((gp) + -0x7c48);                           // 0x001bd108: lw $a0, -0x7c48($gp)
    SignalSema();  // 0x1142f0                                  // 0x001bd10c: jal 0x1142f0
    a0 = *(int32_t*)((gp) + -0x7c4c);                           // 0x001bd110: lw $a0, -0x7c4c($gp)
    a0 = 0x24 << 16;                                            // 0x001bd114: lui $a0, 0x24
    a1 = 0x5003;                                                // 0x001bd118: addiu $a1, $zero, 0x5003
    a0 = a0 + -0x2050;                                          // 0x001bd11c: addiu $a0, $a0, -0x2050
    func_0011b140();  // 0x11af08                                // 0x001bd12c: jal 0x11af08
label_0x1bd134:
    a0 = 0x24 << 16;                                            // 0x001bd134: lui $a0, 0x24
    a1 = 0x4402;                                                // 0x001bd138: addiu $a1, $zero, 0x4402
    a0 = &str_0023dfa8;  // "cdrom0:"                           // 0x001bd13c: addiu $a0, $a0, -0x2058
    func_0011b140();  // 0x11af08                                // 0x001bd14c: jal 0x11af08
    if (v0 < 0) goto label_0x1bd134;                            // 0x001bd154: bltz $v0, 0x1bd134
    /* nop */                                                   // 0x001bd158: nop 
label_0x1bd15c:
    return;                                                     // 0x001bd160: jr $ra
    sp = sp + 0x10;                                             // 0x001bd164: addiu $sp, $sp, 0x10
}