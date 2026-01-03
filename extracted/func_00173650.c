void func_00173650() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00173650: addiu $sp, $sp, -0x10
    a1 = 3;                                                     // 0x00173654: addiu $a1, $zero, 3
    return func_001778a0();  // Tail call                        // 0x00173660: j 0x177808
    sp = sp + 0x10;                                             // 0x00173664: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00173668: addiu $sp, $sp, -0x10
    func_00169af0();  // 169af0                                // 0x00173674: jal 0x169af0
    if (v0 == 0) goto label_0x1736a0;                           // 0x0017367c: beqz $v0, 0x1736a0
    a1 = 0xff00 << 16;                                          // 0x00173684: lui $a1, 0xff00
    a1 = a1 | 0x131;                                            // 0x00173690: ori $a1, $a1, 0x131
    return func_00169940();  // Tail call                        // 0x00173694: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00173698: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017369c: nop 
label_0x1736a0:
    func_00173840();  // 173840                                // 0x001736a0: jal 0x173840
    func_00168c38();  // 168c38                                // 0x001736a8: jal 0x168c38
    a0 = s0 + 0x78;                                             // 0x001736ac: addiu $a0, $s0, 0x78
    func_001666a0();  // 1666a0                                // 0x001736b0: jal 0x1666a0
    func_00173708();  // 173708                                // 0x001736b8: jal 0x173708
    a0 = 7;                                                     // 0x001736c0: addiu $a0, $zero, 7
    v0 = 0x21 << 16;                                            // 0x001736c8: lui $v0, 0x21
    v1 = v0 + 0x578c;                                           // 0x001736cc: addiu $v1, $v0, 0x578c
label_0x1736d0:
    v0 = g_0021578c;  // Global at 0x0021578c                   // 0x001736d0: lw $v0, 0($v1)
    if (v0 == s0) goto label_0x1736dc;                          // 0x001736d4: beql $v0, $s0, 0x1736dc
    g_0021578c = 0;  // Global at 0x0021578c                    // 0x001736d8: sw $zero, 0($v1)
label_0x1736dc:
    a0 = a0 + -1;                                               // 0x001736dc: addiu $a0, $a0, -1
    /* nop */                                                   // 0x001736e0: nop 
    /* nop */                                                   // 0x001736e4: nop 
    /* nop */                                                   // 0x001736e8: nop 
    if (a0 >= 0) goto label_0x1736d0;                           // 0x001736ec: bgez $a0, 0x1736d0
    v1 = v1 + 4;                                                // 0x001736f0: addiu $v1, $v1, 4
    return;                                                     // 0x00173700: jr $ra
    sp = sp + 0x10;                                             // 0x00173704: addiu $sp, $sp, 0x10
}