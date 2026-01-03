void func_00171200() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x00171200: lui $v0, 0x21
    sp = sp + -0x10;                                            // 0x00171204: addiu $sp, $sp, -0x10
    v1 = g_002157c0;  // Global at 0x002157c0                   // 0x00171208: lw $v1, 0x57c0($v0)
    if (v1 == 0) goto label_0x171238;                           // 0x0017120c: beqz $v1, 0x171238
    func_001476e8();  // 1476e8                                // 0x00171214: jal 0x1476e8
    /* nop */                                                   // 0x00171218: nop 
    a0 = 0x26 << 16;                                            // 0x0017121c: lui $a0, 0x26
    a0 = a0 + 0x7858;                                           // 0x00171224: addiu $a0, $a0, 0x7858
    a2 = 0x48;                                                  // 0x0017122c: addiu $a2, $zero, 0x48
    return func_00155ec0();  // Tail call                       // 0x00171230: j 0x155ec0
    sp = sp + 0x10;                                             // 0x00171234: addiu $sp, $sp, 0x10
label_0x171238:
    return;                                                     // 0x0017123c: jr $ra
    sp = sp + 0x10;                                             // 0x00171240: addiu $sp, $sp, 0x10
}