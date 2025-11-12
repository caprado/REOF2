void func_0013eba8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013eba8: addiu $sp, $sp, -0x20
    s1 = 0xf;                                                   // 0x0013ebb4: addiu $s1, $zero, 0xf
    func_0013eef0();  // 0x13eed8                                // 0x0013ebc0: jal 0x13eed8
    s2 = 1;                                                     // 0x0013ebc4: addiu $s2, $zero, 1
    v0 = 0x21 << 16;                                            // 0x0013ebc8: lui $v0, 0x21
    s0 = v0 + -0x6180;                                          // 0x0013ebcc: addiu $s0, $v0, -0x6180
label_0x13ebd0:
    v0 = g_00209e80;  // Global at 0x00209e80                   // 0x0013ebd0: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x13ebe8;                          // 0x0013ebd4: bnel $v0, $s2, 0x13ebe8
    s1 = s1 + -1;                                               // 0x0013ebd8: addiu $s1, $s1, -1
    func_0013eba8();  // 0x13e9e8                                // 0x0013ebdc: jal 0x13e9e8
    s1 = s1 + -1;                                               // 0x0013ebe4: addiu $s1, $s1, -1
label_0x13ebe8:
    if (s1 >= 0) goto label_0x13ebd0;                           // 0x0013ebe8: bgez $s1, 0x13ebd0
    s0 = s0 + 0x60;                                             // 0x0013ebec: addiu $s0, $s0, 0x60
    func_0013ef18();  // 0x13eef0                                // 0x0013ebf0: jal 0x13eef0
    /* nop */                                                   // 0x0013ebf4: nop 
    func_001386f8();  // 0x138698                                // 0x0013ebf8: jal 0x138698
    /* nop */                                                   // 0x0013ebfc: nop 
    return func_00140f40();  // Tail call                        // 0x0013ec10: j 0x140f28
    sp = sp + 0x20;                                             // 0x0013ec14: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x0013ec18: addiu $sp, $sp, -0x10
    a0 = 0x22 << 16;                                            // 0x0013ec1c: lui $a0, 0x22
    a0 = &str_00226118;  // "sampling frequency=%d[Hz]\n"       // 0x0013ec24: addiu $a0, $a0, 0x6118
    return func_00116598();  // Tail call                        // 0x0013ec2c: j 0x116508
    sp = sp + 0x10;                                             // 0x0013ec30: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013ec34: nop 
    return;                                                     // 0x0013ec38: jr $ra
    g_0022613e = a1;  // Global at 0x0022613e                   // 0x0013ec3c: sb $a1, 0x26($a0)
}