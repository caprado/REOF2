void func_001410d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001410d8: addiu $sp, $sp, -0x10
    v1 = 0x21 << 16;                                            // 0x001410dc: lui $v1, 0x21
    v1 = v1 + 0x7c;                                             // 0x001410e4: addiu $v1, $v1, 0x7c
    v0 = g_0021007c;  // Global at 0x0021007c                   // 0x001410ec: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x001410f0: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x141140;                           // 0x001410f4: bnez $v0, 0x141140
    g_0021007c = v0;  // Global at 0x0021007c                   // 0x001410f8: sw $v0, 0($v1)
    s0 = 0x21 << 16;                                            // 0x001410fc: lui $s0, 0x21
    s0 = s0 + 0x310;                                            // 0x00141100: addiu $s0, $s0, 0x310
    func_00138dd0();  // 138dd0                                // 0x00141104: jal 0x138dd0
    a0 = g_00210310;  // Global at 0x00210310                   // 0x00141108: lw $a0, 0($s0)
    g_00210310 = 0;  // Global at 0x00210310                    // 0x0014110c: sw $zero, 0($s0)
    v0 = 0x21 << 16;                                            // 0x00141110: lui $v0, 0x21
    s0 = v0 + 0x84;                                             // 0x00141114: addiu $s0, $v0, 0x84
    v1 = g_00210084;  // Global at 0x00210084                   // 0x00141118: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x141130;                           // 0x0014111c: beqz $v1, 0x141130
    func_0011b6d8();  // 11b6d8                                // 0x00141124: jal 0x11b6d8
    /* nop */                                                   // 0x00141128: nop 
    g_00210084 = 0;  // Global at 0x00210084                    // 0x0014112c: sw $zero, 0($s0)
label_0x141130:
    return func_00139120();  // Tail call                        // 0x00141138: j 0x1390a8
    sp = sp + 0x10;                                             // 0x0014113c: addiu $sp, $sp, 0x10
label_0x141140:
    return;                                                     // 0x00141148: jr $ra
    sp = sp + 0x10;                                             // 0x0014114c: addiu $sp, $sp, 0x10
}